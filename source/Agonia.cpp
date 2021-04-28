#include "Agonia.hpp"
#include <iostream>
#include<stdio.h>
Agonia::Agonia()
{
   mago = new Mago(Vetor2F(200.0f, 200.0f));
   purgatorio = new Purgatorio(&gf, mago);
}

Agonia::~Agonia()
{

}

void Agonia::executar()
{
    relogio.restartar();
    while (gf.getJanela()->isOpen())
    {

        float dt = relogio.tempoDecorrido();
        if (dt > 1.0f / 20.0f)
            dt = 1.0 / 20.0f;
        //std::cout << dt << std::endl;
        relogio.restartar();
        gf.limpar();
        
        purgatorio->atualizar(dt);
        
        
        if(mago->getPosicao().x > 400.0f && mago->getPosicao().x < 2800.0f)
        gf.centralizar(Vetor2F(mago->getPosicao().x, 300.0f));
        gf.mostrar();
        gf.eventosJanela();
    }
}