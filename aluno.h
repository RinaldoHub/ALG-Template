//COMECO PARTE 4
#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

#include <iostream>
using namespace std;

class Aluno {
private:
    string nome;
    string mat;

public:
    Aluno() {}
    Aluno(const char * nome, const char * mat) : nome(nome), mat(mat) {}

    friend class Arranjo<Aluno>;
};

template<>
void Arranjo<Aluno>::set(int idx, const Aluno & aluno) {
    // atribua nome e mat individualmente para o item do array
    items[idx].nome = aluno.nome;
    items[idx].mat = aluno.mat;
}

template<>
void Arranjo<Aluno>::exibir() {
    // exiba cada aluno do array no formato "idx : mat = nome"
    for(int idx = 0; idx < tamanho; idx++){
    cout << idx << " : " << items[idx].mat << " = " << items[idx].nome << endl;
    }
}


#endif // ALUNO_H_INCLUDED
