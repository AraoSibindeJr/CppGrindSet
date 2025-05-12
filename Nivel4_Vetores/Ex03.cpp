//  3. Conte quantos valores em um vetor são positivos.
#include <iostream>
#include <stdio.h>
using namespace std;

main(){
  int tamanho, contPositivo = 0;

  // Solicitar tamanho do vetor
  cout<<"Insira o tamanho do vetor: " << endl;
  cin>>tamanho;
  int v[tamanho];

  // Preencher array
  for(int i = 1; i<= tamanho; i++){
    cout<<"Insira o " << i << " valor no vetor: " << endl;
    cin>>v[i];
    if(v[i] > 0){
      contPositivo++;
    }
  }

  // Saida de dados
  cout<<"Total de valores positivos no vetor: " << contPositivo  << endl;
}