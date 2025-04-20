// Verifique se um número é par ou ímpar.
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
  int num;
  cout<<"Insira um numero: ";
  cin>>num;
  if(num % 2 == 0){
    cout<< num <<" e um numero e Par";
  }else{
    cout<< num <<" e um  numero impar";
  }
}