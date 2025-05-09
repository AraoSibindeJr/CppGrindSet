//  1. Leia 10 números e armazene-os em um vetor
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  int v[3];
  for(int i =1; i <= sizeof(v) / sizeof(v[0]); i++){
    cout<<endl<< " Insira um numero: ";
    cin>>v[i];
  }
  cout<<endl<<" Valores armazenados no vector: ";
  for(int i =1; i <= sizeof(v) / sizeof(v[0]); i++){
    cout<<endl<<v[i];
  }
}