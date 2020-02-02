#include "Game.h"
#include "SDL2/SDL_image.h"
#include "TextureManager.h"
#include "InputHandler.h"
#include "Vector2D.h"
#include <iostream>
#include <cstdlib>

Game* Game::s_pInstance = 0;

Game::Game(){};

//initialize the game. Set the variable m_bRunning to true
bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
    
    //attempt to initialize SDL
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0){
        std::cout << "SDL init success\n";
        
        //init the window
        m_pWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if(m_pWindow != 0){ //window init success
            std::cout << "window creation success\n";
            //init the Renderer
            m_pRenderer = SDL_CreateRenderer(m_pWindow, -1,0);
            if(m_pRenderer != 0){//render init success
                std::cout << "renderer creation success\n";
                SDL_SetRenderDrawColor(m_pRenderer,0,0,0,255);
            }
            else{
                std::cout << "renderer init fail\n";
                return false; //renderer init fail
            }
        }
        else{
            std::cout << "window init fail\n";
            return false; //window init fail
        }
    }
    else{
        std::cout << "SDL init fail\n";
        return false; //SDL init fail
    }
    
    //Loads the textures
    if(!TheTextureManager::Instance()->load("assets/cuadrado.png","snake", m_pRenderer)){
        return false;
    }
    if(!TheTextureManager::Instance()->load("assets/cuadradoRojo.png","comida", m_pRenderer)){
        return false;
    }
    
    //Loads the GameObjects
    p = new Player(new LoaderParams(40,40,40,40,"snake"));
    f = new Food(new LoaderParams(40,80,40,40,"comida"));
    std::cout << "init success\n";
    m_bRunning = true; //everything inited successfully, start the main loop
    return true;
}

//Manage input
void Game::handleEvents(){
    TheInputHandler::Instance()->update();
}

void Game::update(){
    p->update();
    
    //Check collision with Food
       if( p->getPosition().getX() == f->getPosition().getX() &&
        p->getPosition().getY() == f->getPosition().getY() )
        {
            float x = (std::rand()/((RAND_MAX)/9))*40;
            float y = (std::rand()/((RAND_MAX)/9))*40;
            Vector2D *tmp = new Vector2D(x,y);
            
            f->setPosition(*tmp);
        }else{
            p->keepTail();
        }
    //Check collision with walls
        if( p->getPosition().getX() >= 400 ||
        p->getPosition().getY() >= 400 ||
        p->getPosition().getX() < 0 ||
        p->getPosition().getY() < 0 
        )
        {
            clean();
            quit();
        }
    //Check collision with self
       if(p->ouroboros()){
        clean();
        quit();
    }
}

//Clears the renderer and then renders again with the clear color
void Game::render(){
    SDL_RenderClear(m_pRenderer); //clear the render to the draw color
    p->draw();
    f->draw();
    SDL_RenderPresent(m_pRenderer); //draw to the screen
}

//Close the window, renderer and all the SDL subsystems
void Game::clean(){
    std::cout << "cleaning game\n";
    SDL_DestroyWindow(m_pWindow);
    SDL_DestroyRenderer(m_pRenderer);
    SDL_Quit();
    
}

void Game::quit(){
    m_bRunning = false;
}