//  6. Leia um vetor de 10 números e informe quantos são pares
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  int v[10], totPar = 0;
  // Preencher o array
  for(int i=0; i<10; i++){
    cout<<"Insira um numero: "<<endl;
    cin>>v[i];
    // Condicao para filtrar os pares
    if(v[i] % 2 == 0){
      totPar++; 
    }
  }
  // Saida de Dados
  cout<<"Total de Pares no array: " << totPar <<endl;
}