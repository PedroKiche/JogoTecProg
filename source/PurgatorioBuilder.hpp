#ifndef _PURGATORIOBUILDER_HPP_
#define _PURGATORIOBUILDER_HPP_

#include"FaseBuilder.hpp"
#include"Purgatorio.hpp"

class PurgatorioBuilder: public FaseBuilder
{
private:
    Fase* fase;

public:
    PurgatorioBuilder(Gerenciador_Grafico* gf, Mago* mg);
    ~PurgatorioBuilder();
    void criaPlataformas();
    void criaInimigo();
    void criaObstaculo();
    void inicializarEntidades();
    Fase* getFase();
};

#endif