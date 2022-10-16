/*---------------------------------------------------------------------
CHALLENGE 

    Read the Integer value between 1 - 12 and print the corresponding month in Portuguese. 

        Selection Statement Solution, there's a If Else solution, I just decided to upload both version of my solution to this problem. 

-----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  switch(n) {
    case 1:
      cout << "Janeiro" << endl;
      break;
    case 2:
      cout << "Fevereiro" << endl; 
      break;
    case 3:
      cout << "Março" << endl;
      break;
    case 4:
      cout << "Abril" << endl;
      break;
    case 5:
      cout << "Maio" << endl;
      break;
    case 6:
      cout << "Junho" << endl;
      break;
    case 7:
      cout << "Julho" << endl;
      break;
    case 8:
      cout << "Agosto" << endl;
      break;
    case 9:
      cout << "Setembro" << endl;
      break;
    case 10:
      cout << "Outubro" << endl;
      break;
    case 11:
      cout << "Novembro" << endl;
      break;
    case 12:
      cout << "Dezembro" << endl;
      break;
    
    default:
      cout << "Mes nao definido" << endl;
      break; 

  }
  return 0;
}