#include <iostream>
using namespace std;

int main() {

    int tamanho;
    int soma = 0;
    int contador = 0; 

    float media = soma / tamanho; 

     int notas[tamanho]; 

    cout << "How many scores you want to type?" << endl;
    cin >> tamanho;


    cout << "Now type the scores" << endl;
    for (int i=0; i < tamanho; i++){
        cin >> notas[i];
        soma += notas[i];
    }

    cout << "You typed: ";
    for (int i=0; i < tamanho; i++) {
        cout << notas[i] << " ";
    }
    cout << endl; 

    return 0;
}
