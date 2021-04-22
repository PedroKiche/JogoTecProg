#include"Mago.hpp"
#include<iostream>

Mago::Mago():
Jogador()
{

}

Mago::~Mago()
{

}

Mago::Mago(Vetor2F pos):
Jogador(pos,Vetor2F(100.0f,150.0f),"../JogoTecProg/texture/mago.png")
{

}

void Mago::colidir()
{

}

void Mago::atualizar(float t, Gerenciador_Eventos &evento)
{
    if(evento.getD())
        posicao.x += t*200;
    if(evento.getA())
        posicao.x -= t*200;
    if(evento.getW())
        posicao.y += t*200;
}
