#ifndef _LIMIAR_HPP_
#define _LIMIAR_HPP_

#include "Fase.hpp"

class Limiar:public Fase
{
public:
    Limiar();
    Limiar(Gerenciador_Grafico* GeGr, bool jogador2);
    ~Limiar();
};

#endif
