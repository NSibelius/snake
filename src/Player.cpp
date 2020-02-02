#include "Player.h"
#include "InputHandler.h"
#include "TextureManager.h"
#include "Game.h"

Player::Player(const LoaderParams* pParams){
    Vector2D tmp = tail.back();
    tmp.setX(pParams->getX());
    tmp.setY(pParams->getY());
    tail.push_back(tmp);
    m_width = pParams->getWidth();
    m_height = pParams->getHeight();
    m_textureID = pParams->getTextureID();
    direccion = STATE_RIGHT;
}

void Player::update(){
    
    switch(direccion)
    {
        case STATE_RIGHT: 
            
            if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_UP)){
                direccion = STATE_UP;
                //Sube
                up();
                break;
            }
            if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_DOWN)){
                direccion = STATE_DOWN;
                //Baja
                down();
                break;
            }
            right();
            break;
            
        case STATE_LEFT:
            
            if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_UP)){
                direccion = STATE_UP;
                //Sube
                up();
                break;
            }
            if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_DOWN)){
                direccion = STATE_DOWN;
                //Baja
                down();
                break;
            }
            left();
            break;
            
        case STATE_UP: 
            
            if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_RIGHT)){
                direccion = STATE_RIGHT;
                //Derecha
                right();
                break;
            }
            if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_LEFT)){
                direccion = STATE_LEFT;
                //Izquierda
                left();
                break;
            }
            up();
            break;
            
        case STATE_DOWN: 
            
            if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_RIGHT)){
                direccion = STATE_RIGHT;
                //Derecha
                right();
                break;
            }
            if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_LEFT)){
                direccion = STATE_LEFT;
                //Izquierda
                left();
                break;
            }
            down();
            break;
    }
}

void Player::draw(){
    for (Vector2D i: tail){
        TheTextureManager::Instance()->draw(m_textureID, (int)i.getX(),(int)i.getY(), m_width, m_height, TheGame::Instance()->getRenderer());
    }
}

Vector2D Player::getPosition(){
    return (tail.back());
}


void Player::up(){
    Vector2D tmp = tail.back();
    tmp.setY(tmp.getY()-40);
    tail.push_back(tmp);
}

void Player::down(){
    Vector2D tmp = tail.back();
    tmp.setY(tmp.getY()+40);
    tail.push_back(tmp);
}

void Player::right(){
    Vector2D tmp = tail.back();
    tmp.setX(tmp.getX()+40);
    tail.push_back(tmp);
}

void Player::left(){
    Vector2D tmp = tail.back();
    tmp.setX(tmp.getX()-40);
    tail.push_back(tmp);
}

void Player::keepTail(){
    tail.pop_front(); 
}

bool Player::ouroboros(){
    int x;
    int y;
    int contador;
    x = tail.back().getX();
    y = tail.back().getY();
    contador = 0;
    for (Vector2D i: tail){
        if (x == i.getX() && y == i.getY()){
            contador++;
        }
    }
    if (contador>1) return true;
    return false;
}