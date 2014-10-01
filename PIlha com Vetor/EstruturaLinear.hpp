#ifndef ESTRUTURALINEAR_HPP
#define ESTRUTURALINEAR_HPP
#define MAX 100
#define ERROESTRUTURACHEIA -1
#define ERROESTRUTURAVAZIA 0

template <typename T>
class EstruturaLinear {
 protected:
    T estrutura[MAX];
	int fim, tamanho;

 public:
    EstruturaLinear();
    EstruturaLinear<T>(int t);
	void adicionaDado(T dado);
	T retiraDado();
	T final();
	int getPosFinal();
	void limparEstruturaLinear();
	bool estruturaLinearVazia();
	bool estruturaLinearCheia();
};

template <typename T>
EstruturaLinear<T>::EstruturaLinear() {
    fim = -1;
    tamanho = MAX;
}

template <typename T>
EstruturaLinear<T>::EstruturaLinear(int t) {
	fim = -1;
	tamanho = t;
}

template <typename T>
void EstruturaLinear<T>::adicionaDado(T dado) {
	if (estruturaLinearCheia()) {
		throw ERROESTRUTURACHEIA;
	}
	fim++;
	estrutura[fim] = dado;
}

template <typename T>
T EstruturaLinear<T>::retiraDado() {
	if (estruturaLinearVazia()) {
		throw ERROESTRUTURAVAZIA;
	}
	fim--;
	return estrutura[fim + 1];
}

template<typename T>
T EstruturaLinear<T>::final() {
	if(estruturaLinearVazia()) {
		throw ERROESTRUTURAVAZIA;
	}
	return estrutura[fim];
}

template <typename T>
int EstruturaLinear<T>::getPosFinal() {
    if (estruturaLinearVazia()) {
        throw ERROESTRUTURAVAZIA;
    }
    return fim;
}

template <typename T>
void EstruturaLinear<T>::limparEstruturaLinear() {
    if (estruturaLinearVazia()) {
		throw ERROESTRUTURAVAZIA;
	}
	fim = -1;
}

template <typename T>
bool EstruturaLinear<T>::estruturaLinearVazia() {
	return (fim == -1);
}

template <typename T>
bool EstruturaLinear<T>::estruturaLinearCheia() {
	return (fim == tamanho - 1);
}

#endif
