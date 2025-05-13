// 4. Some os elementos de dois vetores de mesmo tamanho
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  int tamanho;
  cout<<"Insira tamanho dos vetores:"<<endl;
  cin>>tamanho;
  int v1[tamanho];
  int v2[tamanho];
  cout<<"Preencha o Vetor 01:"<<endl;
  for(int i = 0; i<tamanho;i++){
    cout<<"Insira valor:"<<endl;
    cin>>v1[i];
  }

  cout<<"Preencha o Vetor 02:"<<endl;
  for(int i = 0; i<tamanho;i++){
    cout<<"Insira valor:"<<endl;
    cin>>v2[i];
  }

  cout<<"Soma dos Vectores:"<<endl;
  for(int i = 0; i<tamanho;i++){
    cout<< v1[i]  << " + " << v2[i] << " = " << v1[i] +v2[i] <<endl;
  }
}
