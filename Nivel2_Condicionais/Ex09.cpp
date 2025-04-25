// Receba um número de 1 a 7 e informe o dia da semana correspondente.
// NOTA: Semana inicia no Domingo
# include <iostream>
# include <stdio.h>
using namespace std;
main(){
  int op;
  cout<<"Insira um numero no intervalo de [1-7]: ";
  cin>>op;
  switch (op){
  case 1:
    cout<<"Dia da Semana: Domingo";
    break;
  case 2:
    cout<<"Dia da Semana: Segunda - Feira";
    break;
  case 3:
    cout<<"Dia da Semana: Terca - Feira";
    break;
  case 4:
    cout<<"Dia da Semana: Quarta - Feira";
    break;
  case 5:
    cout<<"Dia da Semana: Quinta - Feira";
    break;
  case 6:
    cout<<"Dia da Semana: Sexta - Feira";
    break;
  case 7:
    cout<<"Dia da Semana: Sabado";
    break;
  default:
    cout<<" ERROR ";
    break;
  }
}