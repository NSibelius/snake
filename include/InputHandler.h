//
//  InputHandler.h
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 24/01/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#ifndef __SDL_Game_Programming_Book__InputHandler__
#define __SDL_Game_Programming_Book__InputHandler__

#include <iostream>
#include <vector>
#include "SDL2/SDL.h"
#include "Vector2D.h"

enum mouse_buttons
{
    LEFT = 0,
    MIDDLE = 1,
    RIGHT = 2
};

class InputHandler
{
public:
    
    static InputHandler* Instance()
    {
        if(s_pInstance == 0)
        {
            s_pInstance = new InputHandler();
        }
        
        return s_pInstance;
    }
    
    // update and clean the input handler
    void update();
    void reset();
    
    
    // keyboard events
    bool isKeyDown(SDL_Scancode key) const;
     
    // mouse events
    bool getMouseButtonState(int buttonNumber) const;
    Vector2D* getMousePosition() const;
    
private:
    
    InputHandler();
    ~InputHandler();
    
    // private functions to handle different event types
    
    // handle keyboard events
    void onKeyDown();
    void onKeyUp();
    
    // handle mouse events
    void onMouseMove(SDL_Event& event);
    void onMouseButtonDown(SDL_Event& event);
    void onMouseButtonUp(SDL_Event& event);
    
    // member variables
    
    // keyboard specific
    const Uint8* m_keystates;
    
    // mouse specific
    std::vector<bool> m_mouseButtonStates;
    Vector2D* m_mousePosition;
    
    // singleton
    static InputHandler* s_pInstance;
};
typedef InputHandler TheInputHandler;

#endif /* defined(__SDL_Game_Programming_Book__InputHandler__) */
