//  5. Inverta a ordem dos elementos de um vetor de 10 posições.
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
 int v[3];
 cout<<"Preencher o vector: "<<endl;
 // Preencher vetor
 for(int i =0; i<3; i++){
  cout<<"Insira um numero: "<<endl;
  cin>>v[i];
 } 
 // Mostrar valores antes da mudanca de posicoes
 cout<<"Valores na Ordem de Insercao"<<endl;
 for(int i =0; i<3; i++){
  cout<< v[i]<<endl;
 }
 // Mudar a ordem dos valores (Permutacao dos Indices)
 cout<<"Valores na mudanca de ordem"<<endl;
 int t = 3;
 for(int i=1; i<=3;i++){
  v[i] = v[t-1];
  t--;
  cout<< v[i]<<endl;
 }
}