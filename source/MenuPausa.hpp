#ifndef _MENUPAUSA_HPP_
#define _MENUPAUSA_HPP_

#include "Menu.hpp"

class MenuPausa : public Menu
{
private:

public:
    MenuPausa();
    ~MenuPausa();

    void atualizar(float t);
    int selecionaOpcao();
};

#endif