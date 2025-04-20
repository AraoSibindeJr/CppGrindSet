// Solicite ao usuário dois números inteiros e exiba a soma.

# include <iostream>
#include <stdio.h>
using namespace std;
int main(){
  int a,b, c;
  cout<<"Insira um numero:"<<endl; //Solicita primeiro Nr
  cin>>a; //Usuario insere o primeiro nr
  cout<<"Insira outro numero:"<<endl; //Solicita segundo Nr
  cin>>b; //Usuario insere p segundo nr
  cout<<"Resultado: "<<endl;
  c = a + b; // Operacao de adicao 
  cout<< a << " + " << b << " = " << c; // Sera exibida a soma
}