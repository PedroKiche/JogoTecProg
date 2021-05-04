#ifndef _FLORESTAFACTORY_HPP_
#define _FLORESTAFACTORY_HPP_

#include"FaseFactory.hpp"
#include"Floresta.hpp"

class FlorestaFactory: public FaseFactory
{
private:
    Fase* fase;
    std::vector<Vetor2F> posicoesFantasma;
    std::vector<Vetor2F> posicoesAparicao;
    std::vector<Vetor2F> posicoesAlma;
    std::vector<Vetor2F> posicoesArvore;
public:
    FlorestaFactory(Gerenciador_Grafico* gf, Mago* mg);
    ~FlorestaFactory();
    void criaPlataformas();
    void criaPosInimigos();
    void criaPosObstaculos();
    void criaInimigo();
    void criaObstaculo();
    Fase* pedirFase();
};

#endif