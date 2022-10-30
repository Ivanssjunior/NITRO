#include <iostream> 
using namespace std;

int main() {

    int n;
    cin >> n;

    int notas[n];
    int soma = 0;
    
    int contador = 0;
    
    float media = soma / n; 

    for (int i=0; i < n; i++) {
        cin >> notas[i];
        soma += notas[i];
    }

    for (int i = 0; i < n; i++) {
        if(notas[i] > media) {
            contador++;
        }  
    }

    cout << contador << endl;

    return 0;
}