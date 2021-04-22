
#ifndef _PERSONAGEM_HPP_
#define _PERSONAGEM_HPP_

#include "Entidade_Colidivel.hpp"

class Personagem : public Entidade_Colidivel
{
private:
    bool vivo;

public:
    Personagem();
    Personagem(const Vetor2F pos, const Vetor2F tam, const char *caminho);
    virtual ~Personagem();

    //virtual void atualizar(float t)=0;

    bool getVivo();
    void setVivo(bool vivo);
};

#endif