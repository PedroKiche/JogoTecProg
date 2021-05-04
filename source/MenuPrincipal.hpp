#ifndef _MENUPRINCIPAL_HPP_
#define _MENUPRINCIPAL_HPP_

#include "Menu.hpp"

class MenuPrincipal : public Menu
{
private:

public:
    MenuPrincipal();
    ~MenuPrincipal();

    void atualizar(float t);
    int selecionaOpcao();
};

#endif