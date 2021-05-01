#include "Projetil.hpp"

Projetil:: Projetil():Entidade_Colidivel()
{
    ativo = false;
    direita = false;
    velocidade = 0;
}

Projetil::    Projetil(Ids::Id id, const Vetor2F pos, const Vetor2F tam,bool direito, bool ativa,float velocidade, const char *caminho):
Entidade_Colidivel(id,pos,tam,caminho)
{
    ativo = ativa;
    direita = direito;
    velocidade = 0;
}

Projetil::    ~Projetil()
{
    
}


bool Projetil::getAtivo()
{
    return ativo;
}

void Projetil::setAtivo(bool ativa)
{
    ativo = ativa;
}
