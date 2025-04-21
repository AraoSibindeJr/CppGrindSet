//Solicite três notas e calcule a média final.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  double nota1, nota2, nota3, media;
  cout<<"Insira a primeiro nota: ";
  cin>>nota1;
  cout<<"Insira a segunda nota: ";
  cin>>nota2;
  cout<<"Insira a terceira nota: ";
  cin>>nota3;
  media = (nota1 + nota2 + nota3)/3;
  cout<<" A Media das notas e: " << media;
}
