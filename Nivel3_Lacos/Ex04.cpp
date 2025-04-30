// 4. Conte quantos números pares existem entre 1 e 100.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int totPar=0;
  for(int i = 0; i <= 100; i++){
    if (i%2==0){
      cout<<endl<<"O numero: " << i << " e par.";
      totPar = totPar + 1;
    }
  }
  cout<<endl<<"Total de numeros pares: " << totPar;
}