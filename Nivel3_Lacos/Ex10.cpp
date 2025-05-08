//  10. Leia números até que o usuário digite 0 e calcule a soma total
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  double totSum = 0, num, cont = 1;
  cout<<endl<< "Somador de Numeros: ";
  cout<<endl<< "NOTA: Digita [O] para sair do loop.";
  do{
    cout<<endl<<"Insira o " << cont << " numero: ";
    cin>>num;
    totSum = totSum + num;
    cont++;
  } while (num != 0);
  
  if(totSum  == 0){
    cout<<endl<<" A Soma dos Numeros: " << totSum;
  }else{
    cout<<endl<<" A Soma dos Numeros: " << totSum;
  }
}