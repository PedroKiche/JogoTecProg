#ifndef _CONTROLE_H_
#define _CONTROLE_H_

#include "Gerenciador_Teclado.h"
#include "Vetor2D.h"

class Controle
{
private:
    Gerenciador_Teclado::tecla esquerda;
    Gerenciador_Teclado::tecla direita;
    Gerenciador_Teclado::tecla pulo;
    Gerenciador_Teclado::tecla ataque;

public:
    Controle();
    Controle(Gerenciador_Teclado::tecla esq, Gerenciador_Teclado::tecla dir, Gerenciador_Teclado::tecla pul, Gerenciador_Teclado::tecla atq);
    ~Controle();

    Vetor2F movimentacao();
    bool atacar();
};

#endif