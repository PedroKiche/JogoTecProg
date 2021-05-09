#ifndef _BOTAO_HPP_
#define _BOTAO_HPP_

#include "Entidade.hpp"

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