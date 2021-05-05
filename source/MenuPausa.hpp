#ifndef _MENUPAUSA_HPP_
#define _MENUPAUSA_HPP_

#include "Menu.hpp"

class MenuPausa : public Menu
{
private:
    bool pause;

public:
    MenuPausa();
    ~MenuPausa();

    void atualizar(float t);
    int selecionaOpcao();

    bool getPause();
    void setPause(bool Pause);

    void devoPausar();

};

#endif