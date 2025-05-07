//9. Verifique quantos números entre 1 e 500 são divisíveis por 5
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int contDiv = 0;
  for(int i = 1; i <= 500 ; i++){
    if(i%5==0){
      contDiv ++;
      cout<<endl<<" O numero: "<< i << " e divisivel por 5.";
    }
  }
  cout<<endl<<"Total de numeros divisiveis por 5 no intervalo de 1 ate 500: " << contDiv;
}