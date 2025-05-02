//6. Mostre os 10 primeiros números da sequência de Fibonacci.
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  int n1=0, n2=1, aux=0;
  cout<<endl<<aux;
  cout<<endl<<n2;
  for(int i=0; i<=10;i++){
    n1 = n1+n2;//n1 = 1
    n2 = n1 + aux;// n2 = 1
    cout<<endl<<n2;
    aux = n2;
  }
}

