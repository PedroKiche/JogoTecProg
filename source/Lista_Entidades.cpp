#include "Lista_Entidades.hpp"

Lista_Entidades::Lista_Entidades()
{
}
Lista_Entidades::~Lista_Entidades()
{
    destruirEntidades();
}

void Lista_Entidades::inserir(Entidade *info)
{

    lista.inserir(info);
}

void Lista_Entidades::inicializarEntidades(Gerenciador_Grafico* gf)
{
    Entidade *aux = lista.getInicio();
    while (aux)
    {
        aux->inicializar(gf);
        aux = lista.irProx();
    }
}

void Lista_Entidades::atualizarEntidades(float t)
{
    Entidade *aux = lista.getInicio();

    while (aux)
    {
        aux->atualizar(t);
        aux = lista.irProx();
    }
}

void Lista_Entidades::desenharEntidades(Gerenciador_Grafico* gf)
{
    Entidade *aux = lista.getInicio();

    while (aux)
    {
        aux->desenhar(gf);
        aux = lista.irProx();
    }
}

void Lista_Entidades::destruirEntidades()
{
    Entidade* aux = lista.getInicio();
    
    while(aux)
    {
        delete aux;
        aux = lista.irProx();
    }
    lista.limpar();
}