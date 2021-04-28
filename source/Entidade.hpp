#ifndef _ENTIDADE_HPP_
#define _ENTIDADE_HPP_

#include "Gerenciador_Grafico.hpp"
#include "Ids.hpp"

class Entidade
{
protected:
    Ids::Id ID;
    Vetor2F posicao;
    Vetor2F tamanho;
    const char *caminho;

public:
    Entidade();
    Entidade(Ids::Id id, Vetor2F pos,const Vetor2F tam,  const char *caminho = NULL);
    virtual ~Entidade();

    void inicializar(Gerenciador_Grafico* g);
    void desenhar(Gerenciador_Grafico* g);

    void setPosicao(const  Vetor2F posicao);
    Vetor2F getPosicao() const;

    void setTamanho(const Vetor2F tamanho);
    Vetor2F getTamanho();

    virtual void atualizar(float t)=0;

    Ids::Id getID();
};

#endif