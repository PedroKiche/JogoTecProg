#ifndef _LIMIAR_HPP_
#define _LIMIAR_HPP_

#include "Fase.hpp"
#include "Espectro.hpp"

class Limiar:public Fase
{
public:
    Limiar();
    Limiar(Gerenciador_Grafico* GeGr, const bool jogador2 = false);
    ~Limiar();

    bool FaseAcabou();
};

#endif
