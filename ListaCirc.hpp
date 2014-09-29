#ifndef LISTACIRC_HPP_
#define LISTAcirc_HPP_
#include "Elemento.hpp"
#include "ListaEnc.hpp"
template<typename T>
class ListaCirc : private ListaEnc<T>{
 private:
  Elemento<T>* sentinela;
  int tamanho;
 public:
  ListaCirc() : ListaEnc<T>();
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
ListaCirc<T>::ListaCirc() : ListaEnc<T>() {
  setCabeca(new Elemento<T>(0 ,0));
  getCabeca()->setProximo(getCabeca());
}

template<typename T>
ListaCirc<T>::~ListaCirc() {
  ListaEnc<T>::~ListaEnc();
}

template<typename T>
void ListaCirc<T>::adicionaNoInicio(const T& dado) {
  
}

template<typename T>
T ListaCirc<T>::retiraDoInicio() {

}

template<typename T>
void ListaCirc<T>::eliminaDoInicio() {

}

template<typename T>
void ListaCirc<T>::adicionaNaPosicao(const T& dado, int pos){

}

template<typename T>
int ListaCirc<T>::posicao(const T& dado) const {

}

template<typename T>
T* ListaCirc<T>::posicaoMem(const T& dado) const {

}

template<typename T>
bool ListaCirc<T>::contem(const T& dado) {

}

template<typename T>
T ListaCirc<T>::retiraDaPosicao(int pos) {

}

template<typename T>
void ListaCirc<T>::adiciona(const T& dado) {

}

template<typename T>
T ListaCirc<T>::retira() {

}

template<typename T>
T ListaCirc<T>::retiraEspecifico(const T& dado) {

}

template<typename T>
T ListaCirc<T>::mostra(int pos) {

}

template<typename T>
void ListaCirc<T>::adicionaEmOrdem(const T& data) {

}

template<typename T>
int ListaCirc<T>::verUltimo() {

}

template<typename T>
bool ListaCirc<T>::listaVazia() const {

}

template<typename T>
bool ListaCirc<T>::igual(T dado1, T dado2) {

}

template<typename T>
bool ListaCirc<T>::maior(T dado1, T dado2) {

}

template<typename T>
bool ListaCirc<T>::menor(T dado1, T dado2) {

}

template<typename T>
void ListaCirc<T>::destroiLista() {

}