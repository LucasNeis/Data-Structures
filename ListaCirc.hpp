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
  sentinela = new Elemento<T>();
  tamanho = 0;
}

template<typename T>
ListaCirc<T>::~ListaCirc() {
  delete sentinela;
}

template<typename T>
void ListaCirc<T>::adicionaNoInicio(const T& dado) {
  
  
}