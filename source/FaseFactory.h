#ifndef _FASEFACTORY_H_
#define _FASEFACTORY_H_

#include"Fase.h"

class FaseFactory
{
protected:
    Fase* fase;
    void fabricaFase();
public:
    FaseFactory();
    virtual ~FaseFactory();
    virtual void criaPlataformas()=0;
    virtual void criaPosInimigos()=0;
    virtual void criaPosObstaculos()=0;
    virtual void criaInimigo()=0;
    virtual void criaObstaculo()=0;
    virtual Fase* pedirFase() = 0;
};

#endif