/*Enunciado da Questão
  Crie um programa que solicite ao usuário a entrada de um número real. Em seguida, classifique esse número nas seguintes faixas de valor:
  Menor que 0: "Número negativo"
  Entre 0 (inclusive) e 10 (exclusive): "Número pequeno"
  Entre 10 (inclusive) e 100 (exclusive): "Número médio"
  Maior ou igual a 100: "Número grande"
  O programa deve exibir a mensagem correspondente à faixa em que o número se encontra.*/
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  double num;
  cout<<"Insira um numero real qualquer:";
  cin>>num;
  if (num < 0){
    cout<<"Numero negativo";
  }else if (num <= 10){
    cout<<"Numero pequeno";
  }else if( num <= 100){
    cout<<"Numero medio";
  }else{
    cout<<"Numero grande";
  }
}