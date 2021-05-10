#include "MenuPrincipal.h"
#include <iostream>

MenuPrincipal::MenuPrincipal() : Menu(Ids::menuprincipal, Vetor2F(400.0f, 300.0f), Vetor2F(800.0f, 600.0f), "../JogoTecProg/texture/menu.png")
{
    botaoNovoJogo = Botao(Ids::botao, Vetor2F(400.0f, 230.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botaonovojogo.png");
    botaoFase1 = Botao(Ids::botao, Vetor2F(310.0f, 295.0f), Vetor2F(170.0f, 60.0f), "../JogoTecProg/texture/botaofase1.png");
    botaoFase2 = Botao(Ids::botao, Vetor2F(490.0f, 295.0f), Vetor2F(170.0f, 60.0f), "../JogoTecProg/texture/botaofase2.png");
    botaoFase3 = Botao(Ids::botao, Vetor2F(400.0f, 360.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botaofase3.png");
    botao1Jogador = Botao(Ids::botao, Vetor2F(400.0f, 425.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botao1jogador.png");
    botao2Jogadores = Botao(Ids::botao, Vetor2F(400.0f, 425.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botao2jogadores.png");
    botaoCarregarJogo = Botao(Ids::botao, Vetor2F(400.0f, 490.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botaocarregar.png");
    botaoRanking = Botao(Ids::botao, Vetor2F(400.0f, 555.0f), Vetor2F(350.0f, 60.0f), "../JogoTecProg/texture/botaoranking.png");
    jogador2 = false;
}

MenuPrincipal::~MenuPrincipal()
{
}

void MenuPrincipal::inicializarMenu(bibliotecaGrafica::Gerenciador_Grafico* gf)
{
    inicializar(gf);
    botaoNovoJogo.inicializar(gf);
    botaoFase1.inicializar(gf);
    botaoFase2.inicializar(gf);
    botaoFase3.inicializar(gf);
    botao2Jogadores.inicializar(gf);
    botao1Jogador.inicializar(gf);
    botaoCarregarJogo.inicializar(gf);
    botaoRanking.inicializar(gf);
}

void MenuPrincipal::desenharMenu(bibliotecaGrafica::Gerenciador_Grafico* gf)
{
    desenhar(gf);
    botaoNovoJogo.desenhar(gf);
    botaoFase1.desenhar(gf);
    botaoFase2.desenhar(gf);
    botaoFase3.desenhar(gf);
    if (jogador2)
    {
        botao2Jogadores.desenhar(gf);
    }
    else
    {
        botao1Jogador.desenhar(gf);
    }    
    botaoCarregarJogo.desenhar(gf);
    botaoRanking.desenhar(gf);

}

void MenuPrincipal::atualizar(float t)
{
    
}

int MenuPrincipal::selecionaOpcao()
{
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::N)) //Novo jogo
    {
        return 9;
    }
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::Num1) || bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::Numpad1)) //Fase 1
    {
        return 1;
    }
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::Num2) || bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::Numpad2)) //Fase 2
    {
        return 2;
    }
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::Num3) || bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::Numpad3)) //Fase 3
    {
        return 3;
    }
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::J)) //Alternar numero de jogadores para 2
    {
        jogador2 = true;
        return 0;
    }
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::K)) //Alternar numero de jogadores para 1
    {
        jogador2 = false;
        return 0;
    }
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::C)) //Carregar Jogao
    {
        return 4;
    }
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::R))// Ranking
    {
        return 5;
    }

    return 0;
}

bool MenuPrincipal::getJogador2()const
{
    return jogador2;
}

void MenuPrincipal::setJogador2(bool jog2)
{
    jogador2 = jog2;
}