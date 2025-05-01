// 5. Calcule o fatorial de um número.
// Passo a Passo
/*
  1 => 
*/
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  double fat = 1, num;
  cout<<endl<<"Insira um numero: ";
  cin>> num;
  cout<<endl<<"Fatorial de: " << num;
  cout<<endl<<"";
  for(int i =num; i > 0; i--){
    fat = fat * i;
    if (i != 1){
      cout<< i <<" * ";  
    }else{
      cout<<i<<" = ?? ";
    }
  }
  cout<<endl<<" RESULTADO: "<< num <<"! = "<<fat;
}