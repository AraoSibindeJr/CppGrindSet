// 3. Some os números de 1 a N, onde N é fornecido.
#include <iostream>
#include <stdio.h>
using namespace std;
main(){
  int n, sum = 0;
  cout<<endl<< " => SOMADOR DE 1 ATE N <=  ";
  cout<<endl<< " Insira o ultimo elemento da soma: ";
  cin>>n;
  while (n < 0){ // Loop ate usuario digitar N > 0
    cout<<endl<<"ERRO";
    cout<<endl<<" Insira apenas numeros positivos!";
    cout<<endl<<" Insira o ultimo numero da soma: ";
    cout<<endl<<"NB: Valor Positivo:  ";
    cin>>n;
  }

  for(int i = 1; i <= n; i++){
    sum = sum + i;
    if( i == n ){  // Condicao para omitir o sinal "+" no ultimo loop
      cout<<i<< " = ? ";
    }else{
      cout<< i << " + ";
    }
  }
  cout<<endl<<"A Soma dos valores de 1 ate " << n << " e de: " << sum;
}
