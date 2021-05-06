
#ifndef _PERSONAGEM_HPP_
#define _PERSONAGEM_HPP_

#include "Entidade_Colidivel.hpp"

class Personagem : public Entidade_Colidivel
{
protected:
    bool vivo;
    float velocidade;
public:
    Personagem();
    Personagem(Ids::Id id,const Vetor2F pos, const Vetor2F tam, float vel, const char *caminho = NULL);
    virtual ~Personagem();

    //virtual void atualizar(float t)=0;
    float getVelocidade();
    void setVelocidade(float vel);
    bool getVivo();
    void setVivo(bool vivo);
};

#endif