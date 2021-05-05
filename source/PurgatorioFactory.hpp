#ifndef _PURGATORIOFACTORY_HPP_
#define _PURGATORIOFACTORY_HPP_

#include"FaseFactory.hpp"
#include"Purgatorio.hpp"

class PurgatorioFactory: public FaseFactory
{
private:
    std::vector<Vetor2F> posicoesFantasma;
    std::vector<Vetor2F> posicoesGargula;
    std::vector<Vetor2F> posicoesAlma;
    std::vector<Vetor2F> posicoesEspinho;
public:
    PurgatorioFactory(Gerenciador_Grafico* gf);
    ~PurgatorioFactory();
    void criaPlataformas();
    void criaPosInimigos();
    void criaPosObstaculos();
    void criaInimigo();
    void criaObstaculo();
    Fase* pedirFase();
};

#endif