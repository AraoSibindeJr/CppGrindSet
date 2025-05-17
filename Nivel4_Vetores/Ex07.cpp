// 7. Ordene um vetor de forma crescente
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  int tamanho, i;
  cout<<" Insira o tamanho do array: " << endl;
  cin>>tamanho;
  int v[tamanho];
  // Loop para inserir valores
  for( i =0; i<tamanho; i++){
    cout<<" Insira um valor: " << endl;
    cin>>v[i];
  }

  cout<<" Array em ordem crescente: " << endl;
  for(i =0; i<tamanho;i++){
    int troca = 0; // Variavel para realizar a troca de indices do array
    if(v[i]>v[i+1]){
      troca = v[i];
      v[i] = v[i+1];
      v[i+1] = troca;
    }
    cout<< v[i] << endl;
  }
}