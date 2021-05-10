#ifndef _MENURANKING_H_
#define _MENURANKING_H_

#include "Menu.h"
#include <vector>
#include "Ranqueado.h"
#include <fstream>

class MenuRanking : public Menu
{
private:
    std::vector<Ranqueado> ranqueados;
    std::fstream ranking;
    int ranks;

public:
    MenuRanking();
    ~MenuRanking();

    void iniciaRanking();
    void carregaRanking();

    void inicializarMenu(bibliotecaGrafica::Gerenciador_Grafico* gf);
    void desenharMenu(bibliotecaGrafica::Gerenciador_Grafico* gf);
    int selecionaOpcao();
    void atualizar(const float t);
    void receberApelido();
    void ranquea(std::string nome, int pontua);
};

#endif

