#include <iostream>
#include <iomanip>

using namespace std;
void calcSalario (float n, int percentual) {
    float novoSalario = n * (1.0 + (float) percentual / 100);
    float reajuste = n * percentual / 100; 

    cout << fixed << setprecision(2);

    cout << "Novo Salario: " << novoSalario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl; 
} 

int main() {
  float n; 
  cin >> n;

  if (n <= 400) {
    calcSalario(n, 15);
  } else if (n <= 800) {
    calcSalario(n, 12);
  } else if (n <= 1200) {
    calcSalario(n, 10);
  } else if (n <= 2000) {
    calcSalario(n, 7);
  } else {
    calcSalario(n, 4);
  }

  return 0;
}