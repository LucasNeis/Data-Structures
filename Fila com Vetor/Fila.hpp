#ifndef FILA_HPP
#define FILA_HPP
#include "EstruturaLinear.hpp"

template<typename T>
class Fila : protected EstruturaLinear<T> {
 private:
 public:
    Fila();
	Fila<T>(int t);
	void inclui(T dado);
	T retira();
	T ultimo();
	int getUltimo();
	void limparFila();
	bool filaVazia();
	bool filaCheia();
	void inicializaFila();
};

template<typename T>
Fila<T>::Fila() : EstruturaLinear<T>() {
}

template<typename T>
Fila<T>::Fila(int t) : EstruturaLinear<T>(t) {
}

template<typename T>
void Fila<T>::inclui(T dado) {
	EstruturaLinear<T>::adicionaDado(dado);
}

template<typename T>
T Fila<T>::retira() {
	if (EstruturaLinear<T>::estruturaLinearVazia()) {
		throw ERROESTRUTURAVAZIA;
	}
	T dado = EstruturaLinear<T>::estrutura[0];
	EstruturaLinear<T>::fim--;
	for (int i = 0; i < EstruturaLinear<T>::fim+1; i++) {
		EstruturaLinear<T>::estrutura[i] = EstruturaLinear<T>::estrutura[i+1];
	}
	return dado;
}

template<typename T>
T Fila<T>::ultimo() {
	return EstruturaLinear<T>::final();
}

template<typename T>
int Fila<T>::getUltimo() {
	return EstruturaLinear<T>::getPosFinal();
}

template<typename T>
void Fila<T>::limparFila() {
	EstruturaLinear<T>::limparEstruturaLinear();
}

template<typename T>
bool Fila<T>::filaVazia() {
    return EstruturaLinear<T>::estruturaLinearVazia();
}

template<typename T>
bool Fila<T>::filaCheia() {
	return EstruturaLinear<T>::estruturaLinearCheia();
}

template<typename T>
void Fila<T>::inicializaFila() {
	EstruturaLinear<T>::fim = -1;
}

#endif
