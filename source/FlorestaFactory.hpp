#ifndef _FLORESTAFACTORY_HPP_
#define _FLORESTAFACTORY_HPP_

#include"FaseFactory.hpp"
#include"Floresta.hpp"

class FlorestaFactory: public FaseFactory
{
private:
    std::vector<Vetor2F> posicoesFantasma;
    std::vector<Vetor2F> posicoesAparicao;
    std::vector<Vetor2F> posicoesAlma;
    std::vector<Vetor2F> posicoesArvore;
public:
    FlorestaFactory(Gerenciador_Grafico* gf);
    ~FlorestaFactory();
    void criaPlataformas();
    void criaPosInimigos();
    void criaPosObstaculos();
    void criaInimigo();
    void criaObstaculo();
    Fase* pedirFase();
};

#endif