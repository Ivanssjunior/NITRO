/*---------------------------------------------------------------------
CHALLENGE 

    Read the Integer value between 1 - 12 and print the corresponding month in Portuguese. 

    If Else Solution, there's a Seletion Statement solution, I just decided to upload both version of my solution to this problem. 

-----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << "Janeiro" << endl;
  } else if (n == 2) {
    cout << "Fevereiro" << endl;
  } else if (n == 3 ) {
    cout << "Março" << endl;
  } else if (n == 4) {
    cout << "Abril" << endl;
  } else if (n == 5) {
    cout << "Maio" << endl;
  } else if (n == 6) {
    cout << "Junho" << endl;
  } else if ( n == 7 ) {
    cout << "Julho" << endl;
  } else if (n == 8) {
    cout << "Agosto" << endl;
  } else if (n == 9) {
    cout << "Setembro" << endl;
  } else if ( n == 10) {
    cout << "Outubro" << endl;
  } else if (n == 11) {
    cout << "Novembro" << endl;
  } else if ( n == 12 ) {
    cout << "Dezembro" << endl; 
  }

  return 0;
}