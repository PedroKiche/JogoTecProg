#include"Plataforma.hpp"

Plataforma::Plataforma(): Entidade_Colidivel()
{
}

Plataforma::Plataforma(const Vetor2F pos, const Vetor2F tam):Entidade_Colidivel(Ids::plataforma,pos, tam,"../JogoTecProg/texture/plataforma.png" )
{
}

Plataforma::~Plataforma()
{
}

void Plataforma::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
}

void Plataforma::atualizar(float t)
{
    
}