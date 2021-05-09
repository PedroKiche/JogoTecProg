#ifndef _LIMIARFACTORY_HPP_
#define _LIMIARFACTORY_HPP_

#include"FaseFactory.hpp"
#include"Limiar.hpp"

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