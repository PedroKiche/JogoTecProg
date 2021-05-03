#include<iostream>

template <typename TL>

Lista<TL>::Elemento::Elemento(TL Info, Elemento *Ant, Elemento *Prox) : info(Info),
                                                                                    anterior(Ant),
                                                                                    proximo(Prox)
{
}

template <typename TL>

Lista<TL>::Elemento::~Elemento()
{
}

template <typename TL>

TL Lista<TL>::Elemento::getInfo() const
{
  return info;
}

template <typename TL>

void Lista<TL>::Elemento::setInfo(const TL Info)
{
  info = Info;
}

template <typename TL>

typename Lista<TL>::Elemento *Lista<TL>::Elemento::getAnt() const
{
  return anterior;
}

template <typename TL>

void Lista<TL>::Elemento::setAnt(Elemento *Ant)
{
  anterior = Ant;
}

template <typename TL>

typename Lista<TL>::Elemento *Lista<TL>::Elemento::getProx() const
{
  return proximo;
}

template <typename TL>

void Lista<TL>::Elemento::setProx(Elemento *Prox)
{
  proximo = Prox;
}

template <typename TL>
void Lista<TL>::Elemento::remover()
{
  if (anterior) anterior->proximo = proximo;
    if (proximo) proximo->anterior = anterior;
}

template <typename TL>
Lista<TL>::Lista() : inicio(NULL),
                     fim(NULL),
                     atual(NULL)
{
}

template <typename TL>
Lista<TL>::~Lista()
{
  limpar();
}

template <typename TL>
void Lista<TL>::inserir(TL info)
{
  Elemento *novo = NULL;
  novo = new Elemento(info);
  novo->setInfo(info);
  if (inicio==NULL)
  {
    inicio = novo;
    fim = novo;
  }
  else
  {
    fim->setProx(novo);
    novo->setAnt(fim);
    fim = novo;
  }
}


template <typename TL>
void Lista<TL>::limpar()
{
  Elemento *paux = inicio;
  atual = inicio;

  while (atual != NULL)
  {
    paux = atual->getProx();
    delete atual;
    atual = paux;
  }
  inicio = NULL;
  fim = NULL;
  atual = NULL;
}

template <typename TL>
TL Lista<TL>::getInicio()
{
  atual = inicio;
  return (atual) ? atual->getInfo() : NULL;
}

template <typename TL>
TL Lista<TL>::irProx()
{
  atual = atual->getProx();
  return (atual) ? atual->getInfo() : NULL;
}

template <typename TL>
TL Lista<TL>::removeInicio()
{
  if(inicio!=NULL)
  {
    TL aux = inicio->getInfo();
   
    Elemento* aux2 = inicio;
    if(atual==inicio)
    {
      atual= inicio->getProx();
    }
   
    if(fim==inicio)
    {
      fim= NULL;
    }
    inicio->setAnt(NULL);
    inicio = inicio->getProx();
    delete aux2;
    return aux;
  }
  return NULL;
}

template <typename TL>
void Lista<TL>::removerElemento(TL elemento)
{
  getInicio();
  for(getInicio(); atual!=NULL; irProx())
  {
    if(atual->getInfo() == elemento)
    {
      std::cout<< "atual->getInfo() == elemento" << std::endl;
      if(atual == inicio)
        inicio = atual->getProx();
      if(atual == fim)
        fim = atual->getAnt();
      atual->remover();
      delete atual;
      getInicio();
      return;
    }
  }
}