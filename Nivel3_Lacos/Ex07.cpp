//  7. Imprima os múltiplos de 3 entre 1 e 100.
#include<iostream>
#include<stdio.h>
using namespace std;
main(){
  cout<<endl<<" => MULTIPLOS DE 3: <= ";
  cout<<endl<<" ";
  for(int i = 0; i <= 100; i++){
    if(i%3==0){
      if(i == 99){
        cout<< i << ". ";  
      }else{
        cout<< i << ", ";
      }
    }
  }
}