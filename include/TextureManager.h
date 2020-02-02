#ifndef SDL_Game_Programming_Book_TextureManager_h
#define SDL_Game_Programming_Book_TextureManager_h

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <iostream>
#include <string>
#include <map>


class TextureManager
{
public:

    static TextureManager* Instance(){
        if(s_pInstance == 0){
            s_pInstance = new TextureManager();
            return s_pInstance;
        }
        return s_pInstance;
    }
    
    // Load Texture
    bool load(std::string FileName, std::string id, SDL_Renderer* pRenderer);

    //draw
    void draw(std::string id, int x, int y, int width, int height, SDL_Renderer* pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

    //drawFrame
    void drawFrame(std::string id, int x, int y, int width, int height, int currentRow, int currentFrame, SDL_Renderer* pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

    //A list of pointers to the SDL_Texture objects
    std::map<std::string, SDL_Texture*> m_textureMap;
    
private:
    static TextureManager* s_pInstance;
    TextureManager(){}
};

typedef TextureManager TheTextureManager;

#endif