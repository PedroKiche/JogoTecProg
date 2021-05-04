#include "Aparicao.hpp"

Aparicao::Aparicao()
{
}

Aparicao::Aparicao(const Vetor2F pos, Mago* mg): Inimigo(Ids::aparicao, pos, Vetor2F(65.0f, 100.0f), 80.0, 100.0, mg, "../JogoTecProg/texture/aparicao.png")
{

}

Aparicao::~Aparicao()
{
}

void Aparicao::atacar(float t)
{
    //Implementar 
} 

void Aparicao::colidir(Ids::Id id, Vetor2F pos, Vetor2F tam)
{
    if (id == Ids::plataforma)
    {
        float deltaX = pos.x - posicao.x;
        float deltaY = pos.y - posicao.y;
        float interX = abs(deltaX) - (tam.x / 2 + tamanho.x / 2);
        float interY = abs(deltaY) - (tam.y / 2 + tamanho.y / 2);

        if (interX < 0.0f && interY < 0.0f)
        {
            if (interX > interY)
            {
                if (deltaX > 0.0f)
                {
                    posicao.x += interX;
                }
                else
                {
                    posicao.x -= interX;
                }
            }
            else
            {
                if (deltaY > 0.0f)
                {
                    posicao.y += interY;
                    if (descendo){
                        descendo = false;
                    }
                    else{
                        descendo = true;
                    }
                }
                else
                {
                    posicao.y -= interY;
                    if (descendo){
                        descendo = false;
                    }
                    else{
                        descendo = true;
                    }
                }
            }
        }
    }
    if (id == Ids::supernova)
    {
        vivo = false;
    }
}

void Aparicao::atualizar(float t)
{
    movimentar(t);
}

void Aparicao::movimentar(float t)
{
    if (descendo)
    {
        if (posicao.y < posicaoInicial.y + alcance)
        {
            posicao.y += t * velocidade;
        }
        else
        {
            descendo = false;
        }
    }
    else
    {
        if (posicao.y  > posicaoInicial.y - alcance)
        {
            posicao.y -= t * velocidade;
        }
        else
        {
            descendo = true;
        }
    }
}