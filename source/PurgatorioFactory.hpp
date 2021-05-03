#ifndef _PURGATORIOFACTORY_HPP_
#define _PURGATORIOFACTORY_HPP_

#include"FaseFactory.hpp"
#include"Purgatorio.hpp"

class PugatorioFactory: public FaseFactory
{
private:
    Fase* fase;
    std::vector<Vetor2F> posicoesFantasma;
    std::vector<Vetor2F> posicoesGargula;
    std::vector<Vetor2F> posicoesAlma;
    std::vector<Vetor2F> posicoesEspinho;
public:
    PugatorioFactory(Gerenciador_Grafico* gf, Mago* mg);
    ~PugatorioFactory();
    void criaPlataformas();
    void criaPosInimigos();
    void criaPosObstaculos();
    void criaInimigo();
    void criaObstaculo();
    void inicializarEntidades();
    Fase* getFase();
};

#endif