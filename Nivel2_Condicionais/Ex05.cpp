// 5. Faça um programa que classifique uma nota (0 a 10) em conceitos.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  float nota;
  cout<<"Insira sua nota: ";
  cin>>nota;
  if(nota >= 9 && nota <= 10){
    cout<<"Nota classe: A";
  }else if(nota >= 8 && nota <= 8.9){
    cout<<"Nota classe: B";
  }else if(nota >= 7 && nota <= 7.9){
    cout<<"Nota classe: C";
  }else if(nota >= 6 && nota <= 6.9){
    cout<<"Nota classe: D";
  }else if(nota < 6 && nota >= 0){
    cout<<"Nota classe: F";
  }
}
