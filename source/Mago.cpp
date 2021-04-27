#include "Mago.hpp"
#include <iostream>

Mago::Mago() : Personagem(),
               controle()
{
}

Mago::~Mago()
{
}

Mago::Mago(Vetor2F pos) : Personagem(Ids::mago, pos, Vetor2F(50.0f, 75.0f), 100.0, "../JogoTecProg/texture/mago.png"),
                          controle(Teclado::A, Teclado::D, Teclado::W, Teclado::C)
{
}

void Mago::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    if(id == Ids::plataforma || id == Ids::fantasma)
    {
        setPosicao(Vetor2F(getPosicao().x, getPosicao().y - 2.0));
    }
}

void Mago::atualizar(float t)
{
    Vetor2F movimenta = controle.movimentacao();
    setPosicao(Vetor2F(getPosicao().x+ movimenta.x * t * getVelocidade(), getPosicao().y + t * 10));

}

void atacar()
{
}