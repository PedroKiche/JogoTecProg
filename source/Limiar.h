#ifndef _LIMIAR_H_
#define _LIMIAR_H_

#include "Fase.h"
#include "Espectro.h"

class Limiar:public Fase
{
public:
    Limiar();
    Limiar(Gerenciador_Grafico* GeGr, const bool jogador2 = false);
    ~Limiar();

    bool FaseAcabou();
};

#endif
