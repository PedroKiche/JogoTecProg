#ifndef _FLORESTAFACTORY_H_
#define _FLORESTAFACTORY_H_

#include"FaseFactory.h"
#include"Floresta.h"

class FlorestaFactory: public FaseFactory
{
private:
    std::vector<Vetor2F> posicoesFantasma;
    std::vector<Vetor2F> posicoesAparicao;
    std::vector<Vetor2F> posicoesAlma;
    std::vector<Vetor2F> posicoesArvore;
public:
    FlorestaFactory(bibliotecaGrafica::Gerenciador_Grafico* gf, const bool jogador2 = false);
    ~FlorestaFactory();
    void criaPlataformas();
    void criaPosInimigos();
    void criaPosObstaculos();
    void criaInimigo();
    void criaObstaculo();
    Fase* pedirFase();
};

#endif