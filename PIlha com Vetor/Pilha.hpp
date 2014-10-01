#ifndef PILHA_HPP
#define PILHA_HPP
#include "EstruturaLinear.hpp"

template<typename T>
class Pilha : private EstruturaLinear<T> {
 private:
 public:
    Pilha();
	Pilha<T>(int t);
	void empilha(T dado);
	T desempilha();
	T topo();
	int getPosTopo();
	void limparPilha();
	bool PilhaVazia();
	bool PilhaCheia();
};

template<typename T>
Pilha<T>::Pilha() : EstruturaLinear<T>() {
}

template<typename T>
Pilha<T>::Pilha(int t) : EstruturaLinear<T>(t) {
}

template<typename T>
void Pilha<T>::empilha(T dado) {
	EstruturaLinear<T>::adicionaDado(dado);
}

template<typename T>
T Pilha<T>::desempilha() {
	return EstruturaLinear<T>::retiraDado();
}

template<typename T>
T Pilha<T>::topo() {
	return EstruturaLinear<T>::final();
}

template<typename T>
int Pilha<T>::getPosTopo() {
	return EstruturaLinear<T>::getPosFinal();
}

template<typename T>
void Pilha<T>::limparPilha() {
	EstruturaLinear<T>::limparEstruturaLinear();
}

template<typename T>
bool Pilha<T>::PilhaCheia() {
	return EstruturaLinear<T>::estruturaLinearCheia();
}

template<typename T>
bool Pilha<T>::PilhaVazia() {
    return EstruturaLinear<T>::estruturaLinearVazia();
}

#endif
