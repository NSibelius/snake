#include "Food.h"
#include "SDL2/SDL.h"
#include "TextureManager.h"
#include "Game.h"

Food::Food(const LoaderParams* pParams): m_position(pParams->getX(),pParams->getY()){
    
    m_width = pParams->getWidth();
    m_height = pParams->getHeight();
    m_textureID = pParams->getTextureID();
}
void Food::draw(){
    //SDLGameObject::draw();
    TheTextureManager::Instance()->draw(m_textureID, (int)m_position.getX(),(int)m_position.getY(), m_width, m_height, TheGame::Instance()->getRenderer());
}

Vector2D Food::getPosition(){
    return m_position;
}
void Food::setPosition(Vector2D pos){
    m_position.setX(pos.getX());
    m_position.setY(pos.getY());
}