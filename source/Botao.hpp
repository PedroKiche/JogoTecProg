#ifndef _BOTAO_HPP_
#define _BOTAO_HPP_

#include "Entidade.hpp"

class Botao: public Entidade
{
private:

public:
    Botao();
    Botao(Ids::Id id, Vetor2F pos,const Vetor2F tam,  const char *caminho);
    ~Botao();

    void atualizar(float t);
};

#endif