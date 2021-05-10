#include "Controle.h"

Controle::Controle()
{
    esquerda = bibliotecaGrafica::Gerenciador_Teclado::Unknown;
    direita = bibliotecaGrafica::Gerenciador_Teclado::Unknown;
    pulo = bibliotecaGrafica::Gerenciador_Teclado::Unknown;
    ataque = bibliotecaGrafica::Gerenciador_Teclado::Unknown;
}

Controle::Controle(bibliotecaGrafica::Gerenciador_Teclado::tecla esq, bibliotecaGrafica::Gerenciador_Teclado::tecla dir, bibliotecaGrafica::Gerenciador_Teclado::tecla pul, bibliotecaGrafica::Gerenciador_Teclado::tecla atq)
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
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(esquerda))
        movimento.x -= 1;
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(direita))
        movimento.x += 1;
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(pulo))
        movimento.y -= 1;
    return movimento;
}

bool Controle::atacar()
{
    return bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(ataque);
}