#include "Gerenciador_Colisoes.h"

Gerenciador_Colisoes::Gerenciador_Colisoes()
{
}

Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
    removerTodos();
}

void Gerenciador_Colisoes::adicionarEntidade_Colidivel(Entidade_Colidivel *ec)
{
    colidiveis.insert(ec);
}

void Gerenciador_Colisoes::removerEntidade_Colidivel(Entidade_Colidivel *ec)
{
    colidiveis.erase(ec);
}

void Gerenciador_Colisoes::removerTodos()
{
    colidiveis.clear();
}

bool Gerenciador_Colisoes::estaoColidindo(Entidade_Colidivel *ec1, Entidade_Colidivel *ec2)
{
    Vetor2F posicao1 = ec1->getPosicao();
    Vetor2F tamanho1 = ec1->getTamanho();

    Vetor2F posicao2 = ec2->getPosicao();
    Vetor2F tamanho2 = ec2->getTamanho();

    Vetor2F distancia = posicao1 - posicao2;

    if (ec1 == ec2)
        return false;

    if (((tamanho1.x + tamanho2.x) / 2 > fabs(distancia.x) && (tamanho1.y + tamanho2.y) / 2 > fabs(distancia.y)))
        return true;
    return false;
}

void Gerenciador_Colisoes::gerenciarColisoes()
{
    std::set<Entidade_Colidivel *>::iterator itr1;
    for (itr1 = colidiveis.begin(); itr1 != colidiveis.end(); itr1++)
    {
        std::set<Entidade_Colidivel *>::iterator itr2;
        itr2 = itr1;
        for (itr2; itr2 != colidiveis.end(); itr2++)
        {
            Entidade_Colidivel *ec1 = *itr1;
            Entidade_Colidivel *ec2 = *itr2;

            if (estaoColidindo(ec1, ec2))
            {
                ec1->colidir(ec2->getID(), ec2->getPosicao(), ec2->getTamanho());
                ec2->colidir(ec1->getID(), ec1->getPosicao(), ec1->getTamanho());
            }
        }
    }
}
