//  7. Solicite um número de  e classifique-o em faixas de valor.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int num;
  cout<<"Insira um numero:";
  cin>>num;
  if (num > 10){
    cout<<"Valor Dezena";
  }else if (num > 100){
    cout<<"Valor Centena";
  }
  
  

}