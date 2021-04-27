#include "Agonia.hpp"
#include <iostream>
#include<stdio.h>
Agonia::Agonia():mago(Vetor2F(200.0f,200.0f)),
                 purgatorio(&gf,&mago)
{
   
}

Agonia::~Agonia()
{

}

void Agonia::executar()
{
    sf::Clock relogio;
    relogio.restart();
    while (gf.getJanela()->isOpen())
    {

        float dt = relogio.getElapsedTime().asSeconds();
        if (dt > 1.0f / 20.0f)
            dt = 1.0 / 20.0f;
        //std::cout << dt << std::endl;
        relogio.restart();
        gf.limpar();
        purgatorio.atualizar(dt);
        gf.centralizar(Vetor2F(mago.getPosicao().x, 300.0f));
        gf.mostrar();
        gf.eventosJanela();
    }
}