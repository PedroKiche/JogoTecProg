#ifndef _BOTAO_H_
#define _BOTAO_H_

#include "Entidade.h"

class Botao: public Entidade
{
private:

public:
    Botao();
    Botao(const Ids::Id id, const Vetor2F pos,const Vetor2F tam,  const char *caminho);
    ~Botao();

    void atualizar(const float t);
};

#endif