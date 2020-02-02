#ifndef _Food_
#define _Food_

#include "LoaderParams.h"
#include "Vector2D.h"


class Food{

public:
    Food (const LoaderParams* pParams);
    void draw();
    Vector2D getPosition();
    void setPosition(Vector2D pos);
    
private:
    
    //propiedades
    Vector2D m_position;
    
    int m_width;
    int m_height;
    
    std::string m_textureID;
};
#endif 