#ifndef _MENU_HPP_
#define _MENU_HPP_

#include "Entidade.hpp"
#include "Teclado.hpp"

class Menu : public Entidade
{
private:
    
public:
    Menu();
    Menu(Ids::Id id, Vetor2F pos,const Vetor2F tam,  const char *caminho = NULL);
    ~Menu();

    virtual int selecionaOpcao() = 0;
};

#endif