#include "MenuPausa.h"

MenuPausa::MenuPausa() : Menu(Ids::menupausa, Vetor2F(400.0f, 300.0f), Vetor2F(800.0f, 600.0f), "../JogoTecProg/texture/menu.png")
{
    pause = false;
    botaoRetomar = Botao(Ids::botao, Vetor2F(400.0f, 230.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botaoretomar.png");
    botaoSalvar = Botao(Ids::botao, Vetor2F(400.0f, 295.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botaosalvar.png");
    botaoMenu = Botao(Ids::botao, Vetor2F(400.0f, 360.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botaomenuprincipal.png");
}

MenuPausa::~MenuPausa()
{
}

void MenuPausa::inicializarMenu(Gerenciador_Grafico* gf)
{
    inicializar(gf);
    botaoRetomar.inicializar(gf);
    botaoSalvar.inicializar(gf);
    botaoMenu.inicializar(gf);
}

void MenuPausa::desenharMenu(Gerenciador_Grafico* gf)
{
    desenhar(gf);
    botaoRetomar.desenhar(gf);
    botaoSalvar.desenhar(gf);
    botaoMenu.desenhar(gf);
}

void MenuPausa::atualizar(const float t)
{
    
}

int MenuPausa::selecionaOpcao()
{
    if (Gerenciador_Teclado::teclaFoiPressionada(Gerenciador_Teclado::Escape) || Gerenciador_Teclado::teclaFoiPressionada(Gerenciador_Teclado::R))
    {
        return 0;
    }
    if (Gerenciador_Teclado::teclaFoiPressionada(Gerenciador_Teclado::S))
    {
        return 1;
    }
    if (Gerenciador_Teclado::teclaFoiPressionada(Gerenciador_Teclado::M))
    {
        pause = false;
        return 2;
    }

    return -1;
}

void MenuPausa::setPause(const bool Pause)
{
    pause = Pause;
}

bool MenuPausa::getPause() const
{
    return pause;
}

 void MenuPausa::devoPausar()
 {
    if (Gerenciador_Teclado::teclaFoiPressionada(Gerenciador_Teclado::P) || Gerenciador_Teclado::teclaFoiPressionada(Gerenciador_Teclado::Escape))
        pause = true;
 }