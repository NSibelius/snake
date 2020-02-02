#ifndef _Game_
#define _Game_
#include "SDL2/SDL.h"
#include "Player.h"
#include "Food.h"

class Game{
    
public:
    //create the public instance function
    static Game* Instance()
    {
        if(s_pInstance ==0){
            s_pInstance = new Game();
            return s_pInstance;
        }
        return s_pInstance;
    }
    
    //metodos
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    void handleEvents();
    void update();
    void render();
    void clean();
    void quit();
    SDL_Renderer* getRenderer() const {return m_pRenderer;}
    
    //a getter function to access the private running variable
    bool running(){return m_bRunning;}

private:
    //constructores
    Game();

    //propiedades    
    static Game* s_pInstance;
    SDL_Window* m_pWindow;
    SDL_Renderer* m_pRenderer;
    bool m_bRunning;
    Player *p;
    Food *f;
};

typedef Game TheGame;

#endif /* defined (_Game_) */