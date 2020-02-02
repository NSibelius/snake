#include "Game.h"
#include <iostream>

const int FPS = 60;
const int DELAY_TIME = 20000.0f / FPS;

int main(int argc, char **argv)
{
    
    Uint32 frameStart, frameTime;
    
    //Inicialización
	std::cout << "game init attempt..\n";
    if(TheGame::Instance()->init("Game_2", 400, 200, 400, 400,false)){
        std::cout << "game init success!\n";
        
        //Game Loop clasico
        while(TheGame::Instance()->running()) {
            frameStart = SDL_GetTicks();
            
            TheGame::Instance()->handleEvents();
            TheGame::Instance()->update();
            TheGame::Instance()->render();
            
            frameTime = SDL_GetTicks() - frameStart;
            if(frameTime< DELAY_TIME){
                SDL_Delay((int)(DELAY_TIME - frameTime)); //Add the delay
            }
        }
    }
    else{
        std::cout << "game init failure - " << SDL_GetError() << "\n";
        return -1;
    }
    
    //Al finalizar del juego lo limpia todo
    std::cout << "game closing...\n";
    TheGame::Instance()->clean();
    
	return 0;
}
