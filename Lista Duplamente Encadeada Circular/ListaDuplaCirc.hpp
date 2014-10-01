#ifndef LISTADUPLACIRC_HPP_
#define LISTADUPLACIRC_HPP_
#include "ListaDupla.hpp"
#include "ElementoDuplo.hpp"
#include <iostream>

template<typename T>
class ListaDuplaCirc : public ListaDupla<T>{
 private:
	ElementoDuplo<T>* sentinela;

 public:
	ListaDuplaCirc() : ListaDupla<T>() {
		ElementoDuplo<T>* sentinel = new ElementoDuplo<T>(0, 0, 0);
        this->cabeca = sentinel;
        sentinel->setProximo(this->cabeca);
        sentinel->setAnterior(this->cabeca);
        sentinela = sentinel;
	}

	~ListaDuplaCirc() {
		this->destroiListaDuplo();
	}

	void adicionaDuplo(const T& dado) {
	    if (ListaDupla<T>::listaVazia()) {
	        return adicionaNoInicioDuplo(dado);
	    }
	    ElementoDuplo<T>* novo = new ElementoDuplo<T>(dado, 0, 0);
		ElementoDuplo<T>* anterior = sentinela->getAnterior();
		if (novo == 0) {
		    throw ExcecaoListaCheia();
        }
		anterior->setProximo(novo);
		novo->setProximo(sentinela);
		sentinela->setAnterior(novo);
		novo->setAnterior(anterior);
		this->tamanho++;
	}

	void adicionaNoInicioDuplo(const T& dado) {
		ElementoDuplo<T>* novo = new ElementoDuplo<T>(dado, 0, 0);
		if (novo == 0) {
			throw ExcecaoListaCheia();
		}
		novo->setProximo(this->cabeca);
		novo->setAnterior(sentinela);
		this->cabeca = novo;
		novo->getProximo()->setAnterior(novo);
		sentinela->setProximo(novo);
		this->tamanho++;
	}

	T retiraDoInicioDuplo() {
    	T volta = ListaDupla<T>::retiraDoInicioDuplo();
		sentinela->setProximo(this->cabeca);
		this->cabeca->setAnterior(sentinela);
		return volta;
	}

	void eliminaDoInicioDuplo() {
		ListaDupla<T>::eliminaDoInicioDuplo();
		sentinela->setProximo(this->cabeca);
		this->cabeca->setAnterior(sentinela);
	}

	void destroiListaDuplo() {
    	ElementoDuplo<T>* atual;
		for (int i = 0; i < this->tamanho; i++) {
			atual = this->cabeca;
			this->cabeca = this->cabeca->getProximo();
			delete atual;
		}
	    this->tamanho = 0;
	}
};

#endif
