#ifndef _PURGATORIO_H_
#define _PURGATORIO_H_

#include "Fase.h"
#include "Fantasma.h"
#include "Gargula.h"
#include "Alma.h"
#include "Espinho.h"

class Purgatorio:public Fase
{
public:
    Purgatorio();
    Purgatorio(bibliotecaGrafica::Gerenciador_Grafico* GeGr, const bool jogador2 = false);
    ~Purgatorio();
};

#endif
