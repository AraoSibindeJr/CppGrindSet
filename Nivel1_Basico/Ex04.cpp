// Peça ao usuário o raio de um círculo e calcule a área.
#include <iostream>
#include <stdint.h>
using namespace std;
int main(){
  float r,a; // Usamos o (Float) porque podemos ter casas decimais no nosso resultado
  cout<<"Insira o raio do circulo: ";
  cin>>r;
  a = 3.14 * (r*r);// Area = PI * Raio^2
  cout<<"A area do circulo e:"<<endl;
  cout<<a;
}