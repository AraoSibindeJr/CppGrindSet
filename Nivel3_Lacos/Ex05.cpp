// 5. Calcule o fatorial de um número.
// Passo a Passo
/*
  1 => 
*/
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  double fat = 1, num;
  cout<<endl<<"Insira um numero: ";
  cin>> num;
  if(num>0){ //Factorial de Numero Positivo
    for(int i =num; i > 0; i--){
      fat = fat * i;
      if (i != 1){
        cout<< i <<" * ";  
      }else{
        cout<<i<<" = ?? ";
      }
    }
    // Saida de Dados:
    cout<<endl<<"Fatorial de: " << num;
    cout<<endl<<" RESULTADO: "<< num <<"! = "<<fat;
  }else if (num < 0){ //Factorial de Numero Negativo
    cout<<endl<<"Funcionalidade Indisponivel no momento.";
  }else{ //Factorial de Zero
    fat = 0;
    cout<<endl<<"Fatorial de: " << num;
    cout<<endl<<" RESULTADO: "<< num <<"! = "<<fat;
  }
}