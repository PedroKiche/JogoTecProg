#ifndef _LISTA_HPP_
#define _LISTA_HPP_

template<typename TL>
class Lista
{
private:
    template<typename TE>
    class Elemento
    {
    private:
        TE info;
        Elemento* anterior;
        Elemento* proximo;
    public:
        Elemento(TE info =NULL, Elemento* anterior = NULL, Elemento* proximo = NULL);
        ~Elemento();

        TE getInfo();
        void setInfo(TE info);

        Elemento* getAnt();
        void setAnt(Elemento* ant);

        Elemento* getProx();
        void setProx(Elemento* prox);
    };

    Elemento* inicio;
    Elemento* fim;
    Elemento* atual;

public:
    Lista();
    ~Lista();

    void inserir(TL elem);
    void limpar();
    void remover();

};

#include "ListaImplementacao.hpp"
#endif