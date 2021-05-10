#ifndef _PURGATORIOFACTORY_H_
#define _PURGATORIOFACTORY_H_

#include"FaseFactory.h"
#include"Purgatorio.h"

class PurgatorioFactory: public FaseFactory
{
private:
    std::vector<Vetor2F> posicoesFantasma;
    std::vector<Vetor2F> posicoesGargula;
    std::vector<Vetor2F> posicoesAlma;
    std::vector<Vetor2F> posicoesEspinho;
public:
    PurgatorioFactory(bibliotecaGrafica::Gerenciador_Grafico* gf,const bool jogador2 = false);
    ~PurgatorioFactory();
    void criaPlataformas();
    void criaPosInimigos();
    void criaPosObstaculos();
    void criaInimigo();
    void criaObstaculo();
    Fase* pedirFase();
};

#endif