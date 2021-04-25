#include "Mago.hpp"
#include <iostream>

Mago::Mago() : Personagem(),
               controle()
{
}

Mago::~Mago()
{
}

Mago::Mago(Vetor2F pos) : Personagem(Ids::mago, pos, Vetor2F(100.0f, 150.0f), 100.0, "../JogoTecProg/texture/mago.png"),
                          controle(Teclado::A, Teclado::D, Teclado::W, Teclado::C)
{
}

void Mago::colidir()
{

}

void Mago::atualizar(float t)
{
    Vetor2F movimenta = controle.movimentacao();
    setPosicao(Vetor2F(getPosicao().x+ movimenta.x * t * getVelocidade(), getPosicao().y));
}

void atacar()
{
}