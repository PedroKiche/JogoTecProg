#ifndef _FASEFACTORY_HPP_
#define _FASEFACTORY_HPP_

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
    virtual Fase* pedirFase() = 0;
    void fabricaFase();
};

#endif