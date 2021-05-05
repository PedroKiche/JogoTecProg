#ifndef _PURGATORIO_HPP_
#define _PURGATORIO_HPP_

#include "Fase.hpp"
#include "Fantasma.hpp"
#include "Gargula.hpp"
#include "Alma.hpp"
#include "Espinho.hpp"

class Purgatorio:public Fase
{
public:
    Purgatorio();
    Purgatorio(Gerenciador_Grafico* GeGr);
    ~Purgatorio();
};

#endif
