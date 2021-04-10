#ifndef _ENTIDADE_HPP_
#define _ENTIDADE_HPP_

#include"Gerenciador_Grafico.hpp"

class Entidade
{
private:
    int posx;
    int posy;
    int largura;
    int altura;
    Gerenciador_Grafico *gf;

public:
    Entidade();
    Entidade(const int posx, const int posy, const int largura, const int altura);
    ~Entidade();
    void Inicializa();
    const int getPosx();
    void setPosx(const int posx);
    const int getPosy();
    void setPosy(const int posy);
};

#endif 

