#include "Entidade_Colidivel.hpp"

Entidade_Colidivel::Entidade_Colidivel() : Entidade()
{
}
Entidade_Colidivel::Entidade_Colidivel(const Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho) : Entidade(id, pos, tam, caminho)
{
}

Entidade_Colidivel::~Entidade_Colidivel()
{
}