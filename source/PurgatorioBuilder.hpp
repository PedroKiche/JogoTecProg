#ifndef _PURGATORIOBUILDER_HPP_
#define _PURGATORIOBUILDER_HPP_

#include"FaseBuilder.hpp"
#include"Purgatorio.hpp"

class PurgatorioBuilder: public FaseBuilder
{
private:
    Fase* fase;
    std::vector<Vetor2F> posicoesFantasma;
    std::vector<Vetor2F> posicoesGargula;
    std::vector<Vetor2F> posicoesAlma;
    std::vector<Vetor2F> posicoesEspinho;
public:
    PurgatorioBuilder(Gerenciador_Grafico* gf, Mago* mg);
    ~PurgatorioBuilder();
    void criaPlataformas();
    void criaPosInimigos();
    void criaPosObstaculos();
    void criaInimigo();
    void criaObstaculo();
    void inicializarEntidades();
    Fase* getFase();
};

#endif