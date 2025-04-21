//  3. Receba três valores e informe o maior e o menor.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  double n1, n2, n3;
  cout<<"Insira um numero: ";
  cin>>n1;
  cout<<"Insira um numero: ";
  cin>>n2;
  cout<<"Insira um numero: ";
  cin>>n3;
  
  // Cadeia Condicional para verificar o maior valor
  if(n1>n2 && n1>n3){
    cout<<"O maior numero: " << n1;// 1 CASO: N1 MAIOR
  }else if(n2>n1 && n2>n3){
    cout<<"O maior numero: " << n2;// 2 CASO: N2 MAIOR
  }else if(n3> n1 && n3 > n2){
    cout<<"O maior numero: " << n3;// 3 CASO: N3 MAIOR
  }else{
    cout<<"Nao existe maior valor";
  }
  cout<<""<<endl;
  // Cadeia Condicional para verificar o menor valor
  if(n1<n2 && n1<n3){
    cout<<"O menor numero: " << n1;// 1 CASO: N1 MENOR
  }else if(n2<n1 && n2<n3){
    cout<<"O menor numero: " << n2;// 2 CASO: N2 MENOR
  }else if(n3< n1 && n3 < n2){
    cout<<"O menor numero: " << n3;// 3 CASO: N3 MENOR
  }else{
    cout<<"Nao existe menor valor";
  }
}
