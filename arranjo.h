#ifndef ARRANJO_H_INCLUDED
#define ARRANJO_H_INCLUDED
#include <iostream>
using namespace std;

class Excecao{};

//COMECO PARTE 3
template <class T>
class Arranjo
{
private:
    int tamanho; // tamanho do arranjo
    T * items; //items do arranjo
public:
    Arranjo(int tam) {
    // instanciar o array de items com new (pratica 1) e setar tamanho;
        cout << "Um arranjo de itens foi CRIADO" << endl;
        tamanho = tam;
        items = new T[tamanho];
    }

    virtual ~Arranjo() {
    // destruir o array de items (prática 1);
    cout << "Um arranjo de itens foi DESTRUIDO" << endl;
    }

    virtual T get(int idx) {
    // retornar um item do array a partir do indice;
        if (idx > tamanho) throw Excecao();
        return items[idx];
    }

    virtual void set(int idx, const T & item) {
    // set o item do array apontado pelo indice usando =
        if (idx > tamanho) throw Excecao();
        items[idx] = item;
    }

    virtual void exibir();
};

template<class T>
void Arranjo<T>::exibir() {
    // exibir cada item numa linha da forma "<idx>: <item>"
    for(int idx = 0; idx < tamanho; idx++){
        cout << "[" << idx << "]: " << get(idx) << endl;
    }
}

#endif // ARRANJO_H_INCLUDED
