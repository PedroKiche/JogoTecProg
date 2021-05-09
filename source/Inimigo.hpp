#ifndef _INIMIGO_HPP_
#define _INIMIGO_HPP_

#include "Personagem.hpp"


class Mago;

class Inimigo:public Personagem
{
protected:
    float alcance;
    Vetor2F posicaoInicial;
    Mago* mago1;
    Mago* mago2;

public:
    Inimigo();
    Inimigo(const Ids::Id id, const Vetor2F pos, const Vetor2F tam, const float alc,const float vel,Mago* mg, Mago * mg2 = NULL, const char *caminho = NULL);
    virtual ~Inimigo();

    float getAlcance() const;
    void setAlcance(const float alc);
    Vetor2F getPosicaoInicial() const;
    void setPosicaoInicial(const Vetor2F pos);
    virtual void atacar(const float t) = 0;
};

#endif