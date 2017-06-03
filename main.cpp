#include <iostream>
#include <string>
using namespace std;

int main() {
    float base;
    float altura;
    float area;
    float perimetro;
    float Cm;
    cout << "Ingresa un base  " << endl;
    cin >> base;
    cout << "Ingrese un altura " << endl;
    cin >> altura;
    area = base * altura;
    perimetro = base * 2 + altura * 2;
    cout << " El area y perimetro de el rectangulo con estas medidas " " equivalen a: " << base*altura << " y " << base*2+altura*2 << endl;   
}