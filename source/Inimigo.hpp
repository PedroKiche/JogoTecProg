#ifndef _INIMIGO_HPP_
#define _INIMIGO_HPP_

#include "Personagem.hpp"
#include "Mago.hpp"

class Inimigo:public Personagem
{
private:
    Vetor2F posicaoInicial;
public:
    Inimigo();
    Inimigo(const Vetor2F pos, const Vetor2F tam, const char *caminho);
    virtual ~Inimigo();

    void setPosicaoInicial(Vetor2F pos);
    Vetor2F getPosicaoInicial();
    virtual void atacar(Mago &mago) = 0;
};

#endif