//  8. Leia 10 números e exiba a média
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  double totNum, avrg, num;
  for (int i = 1; i <= 10 ; i++){
    cout<<" Insira o " << i << " numero: ";
    cin>>num;
    totNum = totNum + num;  
  }
  avrg = totNum / 10;
  cout<<" A media dos 10 numeros e de: " << avrg;
}