//Implemente uma calculadora com as quatro operações básicas: Adicao, Subtracao, Multiplicacao e Divisao
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int op;
  double  num1, num2;
  cout<<endl<<"Escolha uma operacao: ";
  cout<<endl<<" 1 - Adicao: ";
  cout<<endl<<" 2 - Subtracao: ";
  cout<<endl<<" 3 - Multiplicacao: ";
  cout<<endl<<" 4 - Divisao: "; 
  cout<<endl<<" ";
  cin>>op;
  switch (op){
  case 1:
    // Operacoes de Adicao
    cout<<"==> Adicao de dois Numeros <== ";
    cout<<endl<<"Digite o primeiro numero: ";
    cin>>num1;
    cout<<"Digite o segundo numero: ";
    cin>>num2;
    double add;
    add = num1 + num2;
    cout<<" Adicao: " << num1 << " + " << num2 << " = " << add;
    break;
  case 2:
    // // Operacoes de Subtracao
    cout<<"==> Subtraccao de dois Numeros <== ";
    cout<<endl<<"Digite o primeiro numero: ";
    cin>>num1;
    cout<<"Digite o segundo numero: ";
    cin>>num2;
    double sub;
    sub = num1 - num2;
    cout<<" Subtraccao: " << num1 << " - " << num2 << " = " << sub;
    break;
  case 3:
    //  Operacoes de Multiplicacao
    cout<<"==> Multiplicacao de dois Numeros <== ";
    cout<<endl<<"Digite o primeiro numero: ";
    cin>>num1;
    cout<<"Digite o segundo numero: ";
    cin>>num2;
    double multi;
    multi = num1 * num2;
    cout<<" Multiplicacao: " << num1 << " x " << num2 << " = " << multi;
    break;
  case 4:
    // Operacoes de Divisao
    cout<<"==> Divisao de dois Numeros <== ";
    cout<<endl<<"Digite o primeiro numero: ";
    cin>>num1;
    cout<<"Digite o segundo numero: ";
    cin>>num2;
    if(num2 == 0){
      cout<<" MATH ERROR!";
      exit(0); // Encerra imediatamente
    }
    double div;
    div = num1 / num2;
    cout<<" Divisao: " << num1 << " / " << num2 << " = " << div;
    break;  
   default:
    // Mensagem de Erro
    cout<<" ERROR ";
    break;
  }
}