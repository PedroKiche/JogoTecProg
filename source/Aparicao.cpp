#include "Aparicao.hpp"

Aparicao::Aparicao()
{
}

Aparicao::Aparicao(const Vetor2F pos): Inimigo(Ids::aparicao, pos, Vetor2F(65.0f, 100.0f), 200.0, 100.0, "../JogoTecProg/texture/aparicao.png")
{

}

Aparicao::~Aparicao()
{
}

void Aparicao::atacar(Mago &mago)
{
    //Implementar 
} 

void Aparicao::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    //Implementar
}

void Aparicao::atualizar(float t)
{
    //Implementar
}

void movimentar(float t)
{
    
}