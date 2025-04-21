//  6. Verifique se três lados formam um triângulo e qual tipo.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  double l1, l2, l3;
  cout<<"Insira medida do lado 01:";
  cin>>l1;
  cout<<"Insira medida do lado 02:";
  cin>>l2;
  cout<<"Insira medida do lado 03:";
  cin>>l3;
  if (l1 == l2 && l2 == l3){
    cout<<"Triangulo Equilatero";
  }else if((l1 == l2 && l2 != l3) || (l1 == l3 && l2 != l3) || (l3 == l2 && l2 != l1) ){
    cout<<"Triangulo Isosceles";
  }else if (l1 != l2 && l2 != l3){
    cout<<"Triangulo Escaleno";
  }
}
