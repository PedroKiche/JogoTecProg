#include "Entidade.hpp"

Entidade::Entidade()
{
    posicao.x = 0;
    posicao.y = 0;
    tamanho.x = 0;
    tamanho.y = 0;
    caminho = NULL;
}
Entidade::Entidade( const Vetor2F pos, const Vetor2F tam, const char *caminho) : posicao(pos),
                                                                                tamanho(tam),
                                                                                caminho(caminho)
{
}

Entidade::~Entidade()
{
}
void Entidade::inicializar(Gerenciador_Grafico &g)
{
    g.carregarTextura(caminho);
}

void Entidade::desenhar(Gerenciador_Grafico &g)
{
    g.desenhar(caminho, posicao, tamanho);
}


    void Entidade::setPosicao(const  Vetor2F posicao)
    {
        this->posicao = posicao;
    }

    Vetor2F Entidade::getPosicao()
    {
        return posicao;
    }

    void Entidade::setTamanho(const  Vetor2F tamanho)
    {
        this->tamanho=tamanho;
    }
    Vetor2F Entidade::getTamanho()
    {
        return tamanho;
    }