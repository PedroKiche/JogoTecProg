#include "MenuPrincipal.hpp"
#include <iostream>

MenuPrincipal::MenuPrincipal() : Menu(Ids::menuprincipal, Vetor2F(400.0f, 300.0f), Vetor2F(800.0f, 600.0f), "../JogoTecProg/texture/menuPrincipal.png")
{

}

MenuPrincipal::~MenuPrincipal()
{
}

void MenuPrincipal::atualizar(float t)
{
  
}

int MenuPrincipal::selecionaOpcao()
{
    if (Teclado::teclaFoiPressionada(Teclado::N)) //Novo jogo
    {
        return 3;
    }
    if (Teclado::teclaFoiPressionada(Teclado::Num1) || Teclado::teclaFoiPressionada(Teclado::Numpad1)) //Fase 1
    {
        return 1;
    }
    if (Teclado::teclaFoiPressionada(Teclado::Num2) || Teclado::teclaFoiPressionada(Teclado::Numpad2)) //Fase 2
    {
        return 2;
    }
    if (Teclado::teclaFoiPressionada(Teclado::C)) //Carregar Jogao
    {
        return 4;
    }
    if (Teclado::teclaFoiPressionada(Teclado::R))// Ranking
    {
        return 5;
    }

    return 0;
}