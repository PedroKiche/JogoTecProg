template <typename TL>
template <typename TE>
Lista<TL>::Elemento<TE>::Elemento(TE Info, Elemento<TE> *Ant, Elemento<TE> *Prox) : info(Info),
                                                                                    anterior(Ant),
                                                                                    proximo(Prox)
{
}

template <typename TL>
template <typename TE>
Lista<TL>::Elemento<TE>::~Elemento()
{
}

template <typename TL>
template <typename TE>
TE Lista<TL>::Elemento<TE>::getInfo() const
{
  return info;
}

template <typename TL>
template <typename TE>
void Lista<TL>::Elemento<TE>::setInfo(const TE Info)
{
  info = Info;
}

template <typename TL>
template <typename TE>
Lista<TL>::Elemento<TE> *Lista<TL>::Elemento<TE>::getAnt() const
{
  return anterior;
}

template <typename TL>
template <typename TE>
void Lista<TL>::Elemento<TE>::setAnt(Elemento<TE> *Ant)
{
  anterior = Ant;
}

template <typename TL>
template <typename TE>
Lista<TL>::Elemento<TE> *Lista<TL>::Elemento<TE>::getProx() const
{
  return proximo;
}

template <typename TL>
template <typename TE>
void Lista<TL>::Elemento<TE>::setProx(Elemento<TE> *Prox)
{
  proximo = Prox;
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
void Lista<TL>::inserir(TL elem)
{
  if (elem)
  { //info == NULL == 0 == false

    Elemento<TL> *novo = new Elemento<TL>(elem);
    if (!inicio)
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
}

template <typename TL>
void Lista<TL>::limpar()
{
  Elemento<TL> *paux = inicio;
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
