#ifndef _ENTIDADE_HPP_
#define _ENTIDADE_HPP_

#include "Gerenciador_Grafico.hpp"

class Entidade
{
protected:
    Vetor2F posicao;
    Vetor2F tamanho;
    const char *caminho;

public:
    Entidade();
    Entidade(const Vetor2F pos, const Vetor2F tam, const char *caminho = NULL);
    virtual ~Entidade();

    void inicializar(Gerenciador_Grafico &g);
    void desenhar(Gerenciador_Grafico &g);

    void setPosicao(Vetor2F posicao);
    Vetor2F getPosicao() const;

    void setTamanho(Vetor2F tamanho);
    Vetor2F getTamanho() const;
};

#endif