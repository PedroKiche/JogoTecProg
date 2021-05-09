#include "Lista_Entidades.h"

Lista_Entidades::Lista_Entidades()
{
}
Lista_Entidades::~Lista_Entidades()
{
    if(lista.getInicio()!=NULL)
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
    Entidade* aux = lista.removeInicio();
    while(aux)
    {   
        delete aux;
        aux = lista.removeInicio();
    }
}

void Lista_Entidades::removerEntidade(Entidade* info)
{
    lista.removerElemento(info);
}