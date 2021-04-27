#ifndef _INIMIGO_HPP_
#define _INIMIGO_HPP_

#include "Personagem.hpp"
#include "Mago.hpp"

class Inimigo:public Personagem
{
protected:
    float alcance;
    Vetor2F posicaoInicial;
public:
    Inimigo();
    Inimigo(Ids::Id id, const Vetor2F pos, const Vetor2F tam, float alc, float vel, const char *caminho);
    virtual ~Inimigo();

    float getAlcance();
    void setAlcance(float alc);
    void setPosicaoInicial(Vetor2F pos);
    Vetor2F getPosicaoInicial();
    virtual void atacar(Mago &mago) = 0;
};

#endif