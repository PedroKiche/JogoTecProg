#include "Projetil.hpp"

Projetil::Projetil() : Entidade_Colidivel()
{
    ativo = false;
    direita = false;
    velocidade = 0;
}

Projetil::Projetil(Ids::Id id, const Vetor2F pos, const Vetor2F tam, bool direito, bool ativa, const float velocidade, const char *caminho) : 
Entidade_Colidivel(id, pos, tam, caminho)
                                                                                                                                
{
    ativo = ativa;
    direita = direito;
    this -> velocidade = velocidade;
}

Projetil::~Projetil()
{
}

bool Projetil::getAtivo() const
{
    return ativo;
}

void Projetil::setAtivo(const bool ativa)
{
    ativo = ativa;
}
