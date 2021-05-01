#include "Agonia.hpp"
#include <iostream>
#include<stdio.h>
#include"PurgatorioBuilder.hpp"

Agonia::Agonia()
{
   mago = new Mago(Vetor2F(100.0f, 400.0f));
}

Agonia::~Agonia()
{

}

void Agonia::executar()
{
    relogio.restartar();
    geraFase();
    while (gf.getJanela()->isOpen())
    {

        float dt = relogio.tempoDecorrido();
        if (dt > 1.0f / 20.0f)
            dt = 1.0 / 20.0f;
        //std::cout << dt << std::endl;
        relogio.restartar();
        gf.limpar();
        
        fase->atualizar(dt);
        
        
        if(mago->getPosicao().x > 400.0f && mago->getPosicao().x < 2800.0f)
        gf.centralizar(Vetor2F(mago->getPosicao().x, 300.0f));
        gf.mostrar();
        gf.eventosJanela();
    }
}

void Agonia::geraFase()
{
    FaseBuilder* geraFase = new PurgatorioBuilder(&gf,mago);
    geraFase->criaPlataformas();
    geraFase->criaPosInimigos();
    geraFase->criaInimigo();
    geraFase->criaObstaculo();
    fase = geraFase->getFase();
    fase->inicializarEntidades();
}