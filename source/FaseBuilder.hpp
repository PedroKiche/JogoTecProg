#ifndef _FASEBUILDER_HPP_
#define _FASEBUILDER_HPP_

#include"Fase.hpp"

class FaseBuilder
{
public:
    FaseBuilder();
    ~FaseBuilder();
    virtual void criaPlataformas()=0;
    virtual void criaPosInimigos()=0;
    virtual void criaPosObstaculos()=0;
    virtual void criaInimigo()=0;
    virtual void criaObstaculo()=0;
    virtual Fase* getFase()=0;
};

#endif