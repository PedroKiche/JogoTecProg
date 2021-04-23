#ifndef _CONTROLE_HPP_
#define _CONTROLE_HPP_

#include "Teclado.hpp"
#include "Vetor2D.hpp"

class Controle
{
private:
    Teclado::tecla esquerda;
    Teclado::tecla direita;
    Teclado::tecla pulo;
    Teclado::tecla ataque;

public:
    Controle();
    Controle(Teclado::tecla esq, Teclado::tecla dir, Teclado::tecla pul, Teclado::tecla atq);
    ~Controle();

    Vetor2F movimentacao();
    bool atacar();
};

#endif