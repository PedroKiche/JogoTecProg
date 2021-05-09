
#ifndef _PERSONAGEM_HPP_
#define _PERSONAGEM_HPP_

#include "Entidade_Colidivel.hpp"

class Personagem : public Entidade_Colidivel
{
protected:
    bool vivo;
    float velocidade;
    bool frente;
public:
    Personagem();
    Personagem(const Ids::Id id,const Vetor2F pos, const Vetor2F tam,const float vel, const char *caminho = NULL);
    virtual ~Personagem();

    float getVelocidade() const;
    void setVelocidade(const float vel);
    bool getVivo() const;
    void setVivo(const bool vivo);
};

#endif