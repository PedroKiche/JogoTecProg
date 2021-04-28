#ifndef _AGONIA_HPP_
#define _AGONIA_HPP_

#include"Mago.hpp"
#include"Purgatorio.hpp"
#include "Relogio.hpp"

class Agonia
{
private:
    Gerenciador_Grafico gf;
    Mago* mago;
    Purgatorio* purgatorio;
    Relogio relogio;


public:
    Agonia();
    ~Agonia();
    void executar();
};

#endif