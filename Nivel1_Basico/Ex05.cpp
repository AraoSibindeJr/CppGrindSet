//  Leia a idade de uma pessoa e informe se ela é maior de idade. 
//  Uma pessoa e maior de idade se tiver 30 ou mais anos de vida.

#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
  int idade; // Var que ira armazenar idade do usuario
  cout<<"Insira sua idade: ";
  cin>>idade;
  if(idade >= 30){
    cout<<"A pessoa e maior de idade.";
  }else{
    cout<<"A pessoa e menor de idade.";
  }
}