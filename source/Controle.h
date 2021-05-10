#ifndef _CONTROLE_H_
#define _CONTROLE_H_

#include "Gerenciador_Teclado.h"
#include "Vetor2D.h"

class Controle
{
private:
    bibliotecaGrafica::Gerenciador_Teclado::tecla esquerda;
    bibliotecaGrafica::Gerenciador_Teclado::tecla direita;
    bibliotecaGrafica::Gerenciador_Teclado::tecla pulo;
    bibliotecaGrafica::Gerenciador_Teclado::tecla ataque;

public:
    Controle();
    Controle(bibliotecaGrafica::Gerenciador_Teclado::tecla esq, bibliotecaGrafica::Gerenciador_Teclado::tecla dir, bibliotecaGrafica::Gerenciador_Teclado::tecla pul, bibliotecaGrafica::Gerenciador_Teclado::tecla atq);
    ~Controle();

    Vetor2F movimentacao();
    bool atacar();
};

#endif