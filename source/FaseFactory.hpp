#ifndef _FASEFACTORY_HPP
#define _FASEFACTORY_HPP

#include"Fase.hpp"

class FaseFactory
{
public:
    FaseFactory();
    ~FaseFactory();
    virtual void criaPlataformas()=0;
    virtual void criaPosInimigos()=0;
    virtual void criaPosObstaculos()=0;
    virtual void criaInimigo()=0;
    virtual void criaObstaculo()=0;
    virtual Fase* getFase()=0;
};

#endif