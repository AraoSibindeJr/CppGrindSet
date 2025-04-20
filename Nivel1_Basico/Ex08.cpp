// Receba dois números e informe o maior entre eles.
#include <iostream>
#include <stdio.h>
using namespace std;
 main(){
  int num1, num2;
  cout<<"Insira o primeiro digito: ";
  cin>>num1;
  cout<<"Insira o segundo digito: ";
  cin>>num2;
  if(num1 > num2){
    cout<<"O maior numero e: " << num1;
  }else if(num2 > num1){
    cout<<"O maior numero e: " << num2;
  }else{
    cout<<"Os numeros sao iguais";
  }
}