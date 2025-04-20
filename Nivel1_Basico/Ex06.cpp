// Converta uma temperatura de Celsius para Fahrenheit.
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
  double tempCelsius, tempFahrenheit; // Instanciar as variaveis necessarias
  cout<<" Insira a Temperatura em Graus Celsius: ";
  cin>>tempCelsius;
  tempFahrenheit = (tempCelsius * 9/5) + 32; // Operacao da formula 
  cout<< "A Temperatura em Graus Fahrenheit e de: " << tempFahrenheit << "F"; // Saida de dados
}