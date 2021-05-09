#ifndef _PROJETIL_HPP
#define _PROJETIL_HPP

#include "Entidade_Colidivel.hpp"

class Projetil : public Entidade_Colidivel
{
protected:
    bool ativo;
    bool direita;
    float velocidade;
public:
    Projetil();
    Projetil(const Ids::Id id, const Vetor2F pos, const Vetor2F tam, bool direito, bool ativa, const float velocidade, const char *caminho);
    ~Projetil();
    
    bool getAtivo() const;
    void setAtivo(const bool ativa);
    virtual void mover(const float t)=0;
};

#endif