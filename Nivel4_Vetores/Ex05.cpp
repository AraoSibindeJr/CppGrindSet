//  5. Inverta a ordem dos elementos de um vetor que o usuario vai inserir o tamanho.
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
 int tamanho;
 cout<<"Insira o Tamanho do vetor: "<<endl;
 cin>>tamanho;
 int v[tamanho];
 cout<<"Preencher o vector: "<<endl;
 // Preencher vetor
 for(int i =0; i<tamanho; i++){
  cout<<"Insira um numero: "<<endl;
  cin>>v[i];
 } 
 // Mostrar valores antes da mudanca de posicoes
    cout<<"Valores na Ordem de Insercao"<<endl;
    for(int i =0; i<tamanho; i++){
     cout<< v[i]<<endl;
   }
 // Mudar a ordem dos valores (Permutacao dos Indices)
    cout<<"Valores na mudanca de ordem"<<endl;
    for(int i =tamanho-1; i>=0; i--){
      cout<< v[i]<<endl;
    }  
}