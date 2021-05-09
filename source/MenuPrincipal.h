#ifndef _MENUPRINCIPAL_H_
#define _MENUPRINCIPAL_H_

#include "Menu.h"

class MenuPrincipal : public Menu
{
private:
    Botao botaoNovoJogo;
    Botao botaoFase1;
    Botao botaoFase2;
    Botao botaoFase3;
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
    void atualizar(const float t);
    int selecionaOpcao();
    bool getJogador2() const;
    void setJogador2(const bool jog2);
};

#endif