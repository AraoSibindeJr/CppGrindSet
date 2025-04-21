// 1. Verifique se um ano é bissexto.
/*Um ano bissexto e divisivel por 4 e nao por 100, excepto se for divisivel por 100 e 400
fica bissexto*/
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int ano;
  cout<<"Insira o ano: ";
  cin>>ano;
  if(ano%4==0 && ano%100!=0){
    cout<<"O ano: "<< ano << " e Bissexto.";
  }else if(ano%100 == 0 && ano%400==0){
    cout<<"O ano: "<< ano << " e Bissexto.";
  }else{
    cout<<"O ano: "<< ano << " nao e Bissexto.";
  }
}