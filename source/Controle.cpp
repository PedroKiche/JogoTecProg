#include "Controle.hpp"

Controle::Controle()
{
    esquerda = Teclado::Unknown;
    direita = Teclado::Unknown;
    pulo = Teclado::Unknown;
    ataque = Teclado::Unknown;
}

Controle::Controle(Teclado::tecla esq, Teclado::tecla dir, Teclado::tecla pul, Teclado::tecla atq)
{
    esquerda = esq;
    direita = dir;
    pulo = pul;
    ataque = atq;
}

Controle::~Controle()
{
}

Vetor2F Controle::movimentacao()
{
    Vetor2F movimento = (0.0f, 0.0f);
    if (Teclado::teclaFoiPressionada(esquerda))
        movimento.x -= 1;
    if (Teclado::teclaFoiPressionada(direita))
        movimento.x += 1;
    if (Teclado::teclaFoiPressionada(pulo))
        movimento.y -= 1;
    return movimento;
}

bool Controle::atacar()
{
    return Teclado::teclaFoiPressionada(ataque);
}