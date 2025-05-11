// 2. Leia um vetor de 5 posições e exiba o maior valor.
#include <iostream>
#include <stdio.h>
using namespace std;

main(){
  int tamanho = 5, maior = 0, posicao = 0;
  int v[tamanho];
  for(int i =1; i <= tamanho ; i++){
    cout<<"Insira o " << i << " numero:  " << endl;
    cin>>v[i];
    if(v[i] >= maior){
      maior = v[i];
      posicao = i;
    }
  }
  cout<<"O Maior numero do vector e: " << maior  << endl;
  cout<<"Na Posicao: " << posicao  << endl;
}