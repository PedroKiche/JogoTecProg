#include "MenuPausa.hpp"
#include <iostream>

MenuPausa::MenuPausa() : Menu(Ids::menupausa, Vetor2F(400.0f, 300.0f), Vetor2F(800.0f, 600.0f), "../JogoTecProg/texture/menuPausa.png")
{

}

MenuPausa::~MenuPausa()
{
}

void MenuPausa::atualizar(float t)
{
    int opcao = -1;
    do
    {
        std::cout << opcao << std::endl;
        opcao = selecionaOpcao();
    } while (opcao = -1);
    
}

int MenuPausa::selecionaOpcao()
{
    if (Teclado::teclaFoiPressionada(Teclado::Escape) || Teclado::teclaFoiPressionada(Teclado::R) || Teclado::teclaFoiPressionada(Teclado::P) )
    {
        return 0;
    }
    if (Teclado::teclaFoiPressionada(Teclado::S))
    {
        return 1;
    }

    return -1;
}