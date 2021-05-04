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
    int opcao = -1;
    do
    {
        std::cout << opcao << std::endl;
        opcao = selecionaOpcao();
    } while (opcao = -1);
    
}

int MenuPrincipal::selecionaOpcao()
{
    if (Teclado::teclaFoiPressionada(Teclado::N))
    {
        return 0;
    }
    if (Teclado::teclaFoiPressionada(Teclado::Num1) || Teclado::teclaFoiPressionada(Teclado::Numpad1))
    {
        return 1;
    }
    if (Teclado::teclaFoiPressionada(Teclado::Num2) || Teclado::teclaFoiPressionada(Teclado::Numpad2))
    {
        return 2;
    }
    if (Teclado::teclaFoiPressionada(Teclado::C))
    {
        return 3;
    }
    if (Teclado::teclaFoiPressionada(Teclado::R))
    {
        return 4;
    }

    return -1;
}