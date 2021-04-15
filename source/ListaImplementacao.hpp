template <typename TL>
template <typename TE>
Lista<TL>::Elemento<TE>::Elemento(TE Info, Elemento<TE>* Ant, Elemento<TE>* Prox) :
info(Info), ant(Ant), prox(Prox) 
{
}

template <typename TL>
template <typename TE>
Lista<TL>::Elemento<TE>::~Elemento() 
{
}

template <typename TL>
template <typename TE>
TE Lista<TL>::Elemento<TE>::getInfo()
{
  return info;
}

template <typename TL>
template <typename TE>
void Lista<TL>::Elemento<TE>::setInfo(TE Info) 
{
  info = Info;
}

template <typename TL>
template <typename TE>
Lista<TL>::Elemento<TE>* Lista<TL>::Elemento<TE>::getAnt()    
{
  return ant;
}

template <typename TL>
template <typename TE>
void Lista<TL>::Elemento<TE>::setAnt(Elemento<TE>* Ant) 
{
  ant = Ant;
}

template <typename TL>
template <typename TE>
Lista<TL>::Elemento<TE>* Lista<TL>::Elemento<TE>::getProx() 
{
  return prox;
}

template <typename TL>
template <typename TE>
void Lista<TL>::Elemento<TE>::setProx(Elemento<TE>* Prox) 
{
  prox = Prox;
}


template <typename TL>
Lista<TL>::Lista() :
  inicio(NULL), fim(NULL), atual(NULL)
{

} 

template <typename TL>
Lista<TL>::~Lista() 
{
  esvaziar();
}

template <typename TL>
void Lista<TL>::inserir(TL info) {
  if (info) { //info == NULL == 0 == false
    
    Elemento<TL>* novo = new Elemento<TL>(info);
    if (!inicio) {
    
      inicio = novo;
      fim = novo;
    
    } else {
      
      fim->setProx(novo);
      novo->setAnt(fim);
      fim = novo;
    }
  }
}

template <typename TL>
void Lista<TL>::limpar() {
  Elemento<TL>* paux = inicio;
  atual = inicio;
  
  while (atual != nullptr) {
    paux = atual->getProx();
    delete atual;
    atual = paux;
  }
  inicio = nullptr;
  fim = nullptr;
  atual = nullptr;
}