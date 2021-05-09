#include "Botao.h"

Botao::Botao(): Entidade()
{
}

Botao::Botao(const Ids::Id id,const Vetor2F pos,const Vetor2F tam,  const char *caminho): Entidade(id, pos, tam, caminho)
{
}

Botao::~Botao()
{
}

void Botao::atualizar(float t)
{
}