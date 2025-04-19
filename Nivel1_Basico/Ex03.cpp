// Leia um número e exiba se ele é positivo, negativo ou zero.
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
  int a;
  cout<<"Insira um numero: ";
  cin>>a;
  // Irei usar estrutura condicional(If - else)
  if(a>0){
    cout<<"O Numero e positivo";
  }else if(a<0){
    cout<<"O Numero e Negativo";
  }else{ // So entrara aqui se o nr for 0, nao tem outra opcao, por isso so usamos o (else)
    cout<<"O Numero e Zero";
  }
}