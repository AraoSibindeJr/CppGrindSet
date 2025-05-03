//6. Mostre os 10 primeiros números da sequência de Fibonacci.
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  int n1=0, n2=1, aux=0;
  cout<<"Primeiros 10 Elementos da Sequencia de Fibonacci: ";
  cout<<endl<<" => " << aux;
  cout<<" => " << n2;
  for(int i=0; i<10;i++){
    aux = n1 + n2; // armazena a soma dos elementos que se seguem
    n1 = n2; // armazena o valor anterior na variavel n1
    cout<<" => " << aux; // Output da soma 
    n2 = aux; // armazena novo elemento, resultado da soma anterior
  }
}

