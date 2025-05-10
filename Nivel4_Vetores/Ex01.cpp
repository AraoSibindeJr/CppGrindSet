#include <iostream>
using namespace std;

int main() {
    const int TAMANHO = 10; // Variavel que hospeda o tamanho do array
    int numeros[TAMANHO]; // array que recebe valor da variavel, isto e, array com 10 espacos

    // Leitura dos 10 números
    cout << "Digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++) {// Nota que usamos a variavel para a condicao de paragem, e nao o metodo "sizeOf"
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i]; // Armazenando o nr num  indice do array
    }

    // Exibição dos números armazenados
    cout << "\nNumeros digitados:" << endl;
    for (int i = 0; i < TAMANHO; i++) { // For loop que exibe os valores do array
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}