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

void Mago::atualizar(float t)
{
    posicao += t*5;
    std::cout << t << std::endl;
}
