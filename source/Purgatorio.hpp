#ifndef _PURGATORIO_HPP_
#define _PURGATORIO_HPP_

#include"Fase.hpp"

class Purgatorio:public Fase
{
public:
    Purgatorio();
    Purgatorio(Gerenciador_Grafico* GeGr, Mago* mg);
    ~Purgatorio();
    void inicializarEntidades();
};

#endif
