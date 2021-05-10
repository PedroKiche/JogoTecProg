#ifndef _MENU_H_
#define _MENU_H_

#include "Entidade.h"
#include "Gerenciador_Teclado.h"
#include "Botao.h"

class Menu : public Entidade
{
private:
    
public:
    Menu();
    Menu(const Ids::Id id,const Vetor2F pos,const Vetor2F tam,  const char *caminho = NULL);
    virtual ~Menu();

    virtual void inicializarMenu(bibliotecaGrafica::Gerenciador_Grafico* gf) = 0;
    virtual void desenharMenu(bibliotecaGrafica::Gerenciador_Grafico* gf) = 0;
    virtual int selecionaOpcao() = 0;
};

#endif