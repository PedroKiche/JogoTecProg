#include "Aparicao.hpp"

Aparicao::Aparicao()
{
}

Aparicao::Aparicao(const Vetor2F pos): Inimigo(pos, Vetor2F(65.0f, 100.0f), "../JogoTecProg/texture/aparicao.png")
{

}

Aparicao::~Aparicao()
{
}

void Aparicao::atacar(Mago &mago)
{
    //Implementar 
} 

void Aparicao::colidir()
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