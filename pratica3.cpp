#include <iostream> //COMECO PARTE 1
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"
using namespace std;
using namespace funcoes; //FIM PARTE 2

int main(){

    float x = 5.5, y = 10.15, z = 30.7;

    cout << "Antes: x = " << x << " y = " << y << endl;
    //trocar(x, y);
    cout << "Depois : x = " << x << " y = " << y << endl;
    cout << "Minimo entre " << x << " e " << y << ": " << minimo(x, y) << endl;
    cout << "Maximo entre " << y << " e " << z << ": " << maximo(y, z) << endl;

    cout << "Minimo de \"strA\" e \"strB\": " << minimo("strA", "strB") << endl;
    cout << "Maximo de \"strA\" e \"strB\": " << maximo("strA", "strB") << endl;

    try{
    Arranjo<int> arr(10);
    arr.set(4, 5);
    arr.set(7, 15);
    arr.set(8, 22);
    arr.exibir();

    Arranjo<float> arrF(5);
    arrF.set(2, 12.22);
    arrF.set(4, 14.44);
    arrF.set(1, 11.11);
    arrF.exibir();
    //forcando o acesso a elemento fora do tamanho do array
    cout << endl << "Teste de acesso fora do tamanho do array:" << endl;
    arrF.set(10, 10.1010);
    arrF.exibir();
    } catch (Excecao){
        cout << "Acesso fora do limite do array!" << endl;
    } //FIM PARTE 3

    Arranjo<Aluno> turma(3);

    turma.set(0, Aluno("Joao","1234"));
    turma.set(1, Aluno("Maria","5235"));
    turma.set(2, Aluno("Jose","2412"));

    turma.exibir(); //FIM PARTE 4

    return 0;
} //FIM PARTE 1
