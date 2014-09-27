#ifndef LISTACIRC_HPP_
#define LISTAcirc_HPP_
#include "Elemento.hpp"

template<typename T>
class ListaCirc {
 private:
  Elemento<T>* sentinela;
  int tamanho;
 public:
  ListaCirc();
  ~ListaCirc();
  void adicionaNoInicio(const T& dado);
  T retiraDoInicio();
  void eliminaDoInicio();
  void adicionaNaPosicao(const T& dado, int pos);
  int posicao(const T& dado) const;
  T* posicaoMem(const T& dado) const;
  bool contem(const T& dado);
  T retiraDaPosicao(int pos);
  void adiciona(const T& dado);
  T retira();
  T retiraEspecifico(const T& dado);
  T mostra(int pos);
  void adicionaEmOrdem(const T& data);
  int verUltimo();
  bool listaVazia() const;
  bool igual(T dado1, T dado2);
  bool maior(T dado1, T dado2);
  bool menor(T dado1, T dado2);
  void destroiLista();
};

template<typename T>
ListaCirc<T>::ListaCirc() {
  sentinela = new Elemento<T>(0, 0);
  sentinela->setProximo(sentinela);
  tamanho = 0;
}

template<typename T>
ListaCirc<T>::~ListaCirc() {
  delete sentinela;
  delete tamanho;
}

template<typename T>
void ListaCirc<T>::adicionaNoInicio(const T& dado) {
  Elemento<T>* novo = new Elemento<T>(dado, 0);
  if (novo == 0) {
    throw ExcecaoListaCheia();
  }
  novo->setProximo(sentinela->getProximo());
  sentinela->setProximo(novo);
  tamanho++;
}

template<typename T>
T ListaCirc<T>::retiraDoInicio() {
  if (listaVazia()) {
    throw ExcecaoListaVazia();
  }
  T volta;
  Elemento<T>* sai = sentinela->getProximo();
  if (novo == 0) {
    throw ExcecaoListaCheia(0);
  }
  sentinela->setProximo(sai->getProximo());
  volta = sai->getInfo();
  tamanho--;
  delete sai;
  return volta;
}

template<typename T>
void ListaCirc<T>::eliminaDoInicio() {
  if (listaVazia()) {
    throw ExcecaoListaVazia();
  }
  Elemento<T> sai = sentinela->getProximo();
  if (novo == 0) {
    throw ExcecaoListaCheia(0);
  }
  sentinela->setProximo(sai->getProximo());
  tamanho--;
  delete sai;
}

template<typename T>
void ListaCirc<T>::adicionaNaPosicao(const T& dado, int pos) {
  if (listaVazia()) {
    throw ExcecaoListaVazia();
  }
  Elemento<T> anterior = sentinela->getProximo();
  Elemento<T> novo = new Elemento<T>(dado, 0);
  if (novo == 0) {
    throw ExcecaoListaCheia(0);
  }
  for (int i = 0; i < pos - 1; i++) {
    anterior = anterior->getProximo();
  }
  novo->setProximo(anterior->getProximo());
  anterior->setProximo(novo);
  tamanho++;
}

template<<typename T>
int ListaCirc<T>::posicao(const T& dado) const {
  if (listaVazia()) {
    ExcecaoListaVazia();
  }
  int i = 0;
  Elemento<T>* atual = sentinela->getProximo();
  while (i < tamanho) {
    if (igual(dado, atual->getInfo())) {
      return i;
    }
    atual = atual->getProximo();
    i++;
  }
  throw ExcecaoPosicao();
}