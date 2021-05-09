#ifndef _MENU_HPP_
#define _MENU_HPP_

#include "Entidade.hpp"
#include "Gerenciador_Teclado.hpp"
#include "Botao.hpp"

class Menu : public Entidade
{
private:
    
public:
    Menu();
    Menu(const Ids::Id id,const Vetor2F pos,const Vetor2F tam,  const char *caminho = NULL);
    virtual ~Menu();

    virtual void inicializarMenu(Gerenciador_Grafico* gf) = 0;
    virtual void desenharMenu(Gerenciador_Grafico* gf) = 0;
    virtual int selecionaOpcao() = 0;
};

#endif