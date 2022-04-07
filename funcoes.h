#ifndef FUNCOES_H_INCLUDED //COMECO PARTE 2
#define FUNCOES_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;

namespace funcoes {
template <class T>
void trocar(T & a, T & b)
{
    T varTrocar;

    varTrocar = a;

    a = b;

    b = varTrocar;
}

template <class T>
T maximo(T a, T b)
{
    int maximoVar;

    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }

}

template <>
const char * maximo(const char * a, const char * b){

    if(strcmp(a, b) == 1){
        return a;
    }
    if(strcmp(a, b) == 0){
        cout << a << " e " << b << "possuem o mesmo tamanho!" << endl;
    }
    else{
        return b;
    }
}

template <class T>
T minimo(T a, T b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template <>
const char * minimo(const char * a, const char * b){

    if(strcmp(a, b) == -1){
        return a;
    }
    if(strcmp(a, b) == 0){
        cout << a << " e " << b << "possuem o mesmo tamanho!" << endl;
    }
    else{
        return b;
    }
}
}

#endif // FUNCOES_H_INCLUDED
