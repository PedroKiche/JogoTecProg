#ifndef _AGONIA_HPP_
#define _AGONIA_HPP_

#include "Mago.hpp"
#include "Purgatorio.hpp"
#include "Relogio.hpp"
#include "FaseFactory.hpp"
#include "Fase.hpp"

class Agonia
{
private:
    Gerenciador_Grafico gf;
    Mago* mago;
    Fase* fase;
    Relogio relogio;


public:
    Agonia();
    ~Agonia();
    void executar();
    void geraFase();
};

#endif