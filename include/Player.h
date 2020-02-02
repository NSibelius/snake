#ifndef _Player_
#define _Player_

#include "LoaderParams.h"
#include "Vector2D.h"
#include <list>
#include <string>

enum State{
    STATE_RIGHT,
    STATE_LEFT,
    STATE_UP,
    STATE_DOWN
};

class Player{

public:
    Player (const LoaderParams* pParams);
    
    void update();
    void draw();
    void keepTail();
    bool ouroboros();
    Vector2D getPosition();
    
private:
    void up();
    void down();
    void right();
    void left();
    
    //propiedades
    
    int m_width;
    int m_height;
    
    std::string m_textureID;
    
    State direccion;
    std::list<Vector2D> tail;    
};

#endif 