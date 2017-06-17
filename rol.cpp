#include <iostream> 
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    srand(time(NULL));
  bool esMayor, esIgual;  
  int a, b;
  a = rand()%4;
  b = rand()%4;
  esMayor = a > b;
  esIgual = a == b;
  if (esIgual){ 
  cout << a << " es igual a " << b << endl;
  } else {
  if (esMayor) {
    cout << a << " es mayor que " << b << endl;
  } else {
    cout << a << " es menor que " << b << endl;
  }
  }
     
}
