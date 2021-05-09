#include "Obstaculo.hpp"

Obstaculo::Obstaculo(): Entidade_Colidivel()
{

}

Obstaculo::Obstaculo(const Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char* caminho): Entidade_Colidivel(id, pos, tam, caminho)
{

}

Obstaculo::~Obstaculo()
{

}
