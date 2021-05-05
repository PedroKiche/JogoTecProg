#include "MenuPausa.hpp"

MenuPausa::MenuPausa() : Menu(Ids::menupausa, Vetor2F(400.0f, 300.0f), Vetor2F(800.0f, 600.0f), "../JogoTecProg/texture/menuPausa.png")
{
    pause = false;
}

MenuPausa::~MenuPausa()
{
}

void MenuPausa::atualizar(float t)
{
    
}

int MenuPausa::selecionaOpcao()
{
    if (Teclado::teclaFoiPressionada(Teclado::Escape) || Teclado::teclaFoiPressionada(Teclado::R))
    {
        return 0;
    }
    if (Teclado::teclaFoiPressionada(Teclado::S))
    {
        return 1;
    }

    return -1;
}

void MenuPausa::setPause(bool Pause)
{
    pause = Pause;
}

bool MenuPausa::getPause()
{
    return pause;
}

 void MenuPausa::devoPausar()
 {
    if (Teclado::teclaFoiPressionada(Teclado::P))
        pause = true;
 }