#include "Mago.hpp"
#include <iostream>

Mago::Mago() : Personagem(),
               controle()
{
}

Mago::~Mago()
{
}

Mago::Mago(Vetor2F pos) : Personagem(pos, Vetor2F(100.0f, 150.0f), 100.0, "../JogoTecProg/texture/mago.png"),
                          controle(Teclado::A, Teclado::D, Teclado::W, Teclado::C)
{
}

void Mago::colidir()
{

}

void Mago::atualizar(float t)
{
    Vetor2F movimenta = controle.movimentacao();
    posicao.x += movimenta.x * t * getVelocidade();
}

void atacar()
{
}