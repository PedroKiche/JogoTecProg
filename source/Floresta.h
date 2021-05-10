#ifndef _FLORESTA_H_
#define _FLORESTA_H_

#include "Fase.h"
#include "Fantasma.h"
#include "Aparicao.h"
#include "Alma.h"
#include "Arvore.h"

class Floresta:public Fase
{
public:
    Floresta();
    Floresta(bibliotecaGrafica::Gerenciador_Grafico* GeGr, const bool jogador2 = false);
    ~Floresta();
};

#endif
