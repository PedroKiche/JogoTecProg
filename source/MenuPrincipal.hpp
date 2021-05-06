#ifndef _MENUPRINCIPAL_HPP_
#define _MENUPRINCIPAL_HPP_

#include "Menu.hpp"

class MenuPrincipal : public Menu
{
private:
    Botao botaoNovoJogo;
    Botao botaoFase1;
    Botao botaoFase2;
    Botao botao1Jogador;
    Botao botao2Jogadores;
    Botao botaoCarregarJogo;
    Botao botaoRanking;
    bool jogador2;
public:
    MenuPrincipal();
    ~MenuPrincipal();

    void inicializarMenu(Gerenciador_Grafico* gf);
    void desenharMenu(Gerenciador_Grafico* gf);
    void atualizar(float t);
    int selecionaOpcao();
    bool getJogador2();
    void setJogador2(bool jog2);
};

#endif