#include "Botao.hpp"

Botao::Botao(): Entidade()
{
}

Botao::Botao(Ids::Id id, Vetor2F pos,const Vetor2F tam,  const char *caminho): Entidade(id, pos, tam, caminho)
{
}

Botao::~Botao()
{
}

void Botao::atualizar(float t)
{
}