#ifndef _ENTIDADE_H_
#define _ENTIDADE_H_

#include "Gerenciador_Grafico.h"
#include "Ids.h"

class Entidade
{
protected:
    Ids::Id ID;
    Vetor2F posicao;
    Vetor2F tamanho;
    const char *caminho;

public:
    Entidade();
    Entidade(Ids::Id id, const Vetor2F pos,const Vetor2F tam,  const char *caminho = NULL);
    virtual ~Entidade();

    void inicializar(bibliotecaGrafica::Gerenciador_Grafico* g);
    void desenhar(bibliotecaGrafica::Gerenciador_Grafico* g);

    void setPosicao(const  Vetor2F posicao);
    Vetor2F getPosicao() const;

    void setTamanho(const Vetor2F tamanho);
    Vetor2F getTamanho() const;

    virtual void atualizar(const float t)=0;

    Ids::Id getID() const;
};

#endif