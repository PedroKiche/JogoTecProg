#ifndef _LIMIARFACTORY_H_
#define _LIMIARFACTORY_H_

#include"FaseFactory.h"
#include"Limiar.h"

class LimiarFactory: public FaseFactory
{
private:

public:
    LimiarFactory(Gerenciador_Grafico* gf,const bool jogador2 = false);
    ~LimiarFactory();
    void criaPlataformas();
    void criaPosInimigos();
    void criaPosObstaculos();
    void criaInimigo();
    void criaObstaculo();
    Fase* pedirFase();
};

#endif