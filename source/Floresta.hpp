#ifndef _FLORESTA_HPP_
#define _FLORESTA_HPP_

#include "Fase.hpp"
#include "Fantasma.hpp"
#include "Aparicao.hpp"
#include "Alma.hpp"
#include "Arvore.hpp"

class Floresta:public Fase
{
public:
    Floresta();
    Floresta(Gerenciador_Grafico* GeGr);
    ~Floresta();
};

#endif
