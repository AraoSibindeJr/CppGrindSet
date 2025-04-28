// 2. Exiba a tabuada de um número fornecido pelo usuário.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int num;
  cout<<"Insira um numero: ";
  cin>> num;
  cout<<" Tabuada de " << num ;
  for(int i = 0; i <= 12; i++){
    cout<<endl<< num << " * " <<  i  << " = " <<  num * i;
  }
}