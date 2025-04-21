//  Leia um número e informe se ele é divisível por 3 e 5.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int num;
  cout<<"Insira um numero: ";
  cin>>num;
  if(num%3 == 0 && num%5 == 0){
    cout<<" O numero " << num << " e divisivel por 3 e 5"; 
  }else{
    cout<<" O numero " << num << " nao e divisivel por 3 e 5";
  }
}