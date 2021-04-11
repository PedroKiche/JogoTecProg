#ifndef _ENTIDADE_HPP_
#define _ENTIDADE_HPP_

#include"Gerenciador_Grafico.hpp"
#include"Vetor2D.hpp"

class Entidade
{
private:
    Vetor2D<float> posicao;
    Vetor2D<float> tamanho;
    Gerenciador_Grafico* gf;
    const char* caminho;

public:
    Entidade();
    Entidade(const Vetor2D<float> pos  , const Vetor2D<float> tam  , const char* caminho = NULL);
    ~Entidade();
    void Inicializar(Gerenciador_Grafico &g);
    void atualizar(float t);
    void desenhar(Gerenciador_Grafico &g);

};

#endif 

