#include "Controle.h"

Controle::Controle()
{
    esquerda = Gerenciador_Teclado::Unknown;
    direita = Gerenciador_Teclado::Unknown;
    pulo = Gerenciador_Teclado::Unknown;
    ataque = Gerenciador_Teclado::Unknown;
}

Controle::Controle(Gerenciador_Teclado::tecla esq, Gerenciador_Teclado::tecla dir, Gerenciador_Teclado::tecla pul, Gerenciador_Teclado::tecla atq)
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
    if (Gerenciador_Teclado::teclaFoiPressionada(esquerda))
        movimento.x -= 1;
    if (Gerenciador_Teclado::teclaFoiPressionada(direita))
        movimento.x += 1;
    if (Gerenciador_Teclado::teclaFoiPressionada(pulo))
        movimento.y -= 1;
    return movimento;
}

bool Controle::atacar()
{
    return Gerenciador_Teclado::teclaFoiPressionada(ataque);
}