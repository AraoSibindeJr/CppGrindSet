// Peça dois horários (hora e minuto) e diga qual é mais recente, use uma variavel para cada dado.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int min1, min2, hora1, hora2;
  cout<<endl<<"Dados da Data [A]:";
  cout<<endl<<"Insira a hora: [0 - 23]: ";
  cin>>hora1;
  while (hora1 > 23 || hora1 < 0){
    hora1 = 0;
    cout<<"Insira hora dentro do intervalo [0 - 23]: ";
    cin>>hora1;
  }
  cout<<endl<<"Insira os minutos: [0 - 59]: ";
  cin>>min1;
  while (min1 > 59 || min1 < 0){
    min1 = 0;
    cout<<"Insira  minutos dentro do intervalo: [0 - 59]: ";
    cin>>min1;
  }
  cout<<endl<<"Dados da Data [B]:";
  cout<<endl<<"Insira a hora: [0 - 23]: ";
  cin>>hora2;
  while (hora2 > 23 || hora2 < 0){
    hora2 = 0;
    cout<<"Insira hora dentro do intervalo [0 - 23]: ";
    cin>>hora2;
  }
  cout<<endl<<"Insira os minutos: [0 - 59]: ";
  cin>>min2;
  while (min2 > 59 || min2 < 0){
    min2 = 0;
    cout<<"Insira  minutos dentro do intervalo: [0 - 59]: ";
    cin>>min2;
  }
  cout<<endl<<"Dados recebidos:";
  cout<<endl<<"Dados da Data [A] => " << hora1 << ":" << min1;
  cout<<endl<<"Dados da Data [B] => " << hora2 << ":" << min2;
  // CONDICOES SOBRE HORA MAIS RECENTE
  if (hora1 > hora2){
    // Mensagem para Data [A] ser mais recente
    cout<<endl<< " A Data mais recente e Data [A]: "<< hora1 << ":" << min1;
  }else if(hora1 < hora2){
    // Mensagem para Data [B] ser mais recente
    cout<<endl<< " A Data mais recente e Data [B]: "<< hora2 << ":" << min2;
  }else{
    //As Horas sao iguais, iremos analisar os minutos
    if (min1 > min2){
      // Mensagem para Data [A] ser mais recente
      cout<<endl<< " A Data mais recente e Data [A]: "<< hora1 << ":" << min1;
    }else if(min1 < min2){
      // Mensagem para Data [B] ser mais recente
      cout<<endl<< " A Data mais recente e Data [B]: "<< hora2 << ":" << min2;
    }else{
      // As Datas sao iguais.
      cout<<endl<< "As Datas sao iguais.";
    }
  }
}