//  4. Leia um caractere e diga se é vogal ou consoante.
#include <iostream>
#include <stdio.h>
#include <cctype> // Biblioteca de texto
using namespace std;
main(){
  char x;
  cout<<"Insira um caractere: ";
  cin>>x;
  x = tolower(x); // Convert the character to lowercase
  if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ){
    cout<<" O caracter: " << x << " e uma Vogal.";
  }else{
    cout<<" O caracter: " << x << " e uma Consoante.";
  }
}