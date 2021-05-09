#ifndef _MENUPAUSA_HPP_
#define _MENUPAUSA_HPP_

#include "Menu.hpp"

class MenuPausa : public Menu
{
private:
    bool pause;
    Botao botaoRetomar;
    Botao botaoSalvar;
    Botao botaoMenu;
public:
    MenuPausa();
    ~MenuPausa();

    void inicializarMenu(Gerenciador_Grafico* gf);
    void desenharMenu(Gerenciador_Grafico* gf);
    void atualizar(const float t);
    int selecionaOpcao();
    bool getPause() const;
    void setPause(const bool Pause);
    void devoPausar();

};

#endif