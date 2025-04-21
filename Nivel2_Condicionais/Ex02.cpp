//  2. Solicite um número e diga se ele é primo.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int num;
  cout<<"Insira um numero: ";
  cin>>num;
  if(num%1==0 && num%num==0 && num !=1){
    cout<<"O numero: "<<num<< " e primo.";
  }else{
    cout<<"O numero: "<<num<< " nao e primo.";
  }
}