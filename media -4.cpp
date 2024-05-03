#include<iostream>
using namespace std;

int main(){

    int idades;
    double soma = 0;

    cout<<"Insira a quantidade de medias que voce deseja calcular: "<<endl;
    cin>>idades;

   for ( int i = 1; i <= idades; i++)
   
   {

    int idade;

    cout<<"Insira o valor da idade: ";

    cin>>idade;

    soma += idade;

   }

   double media = soma / idades;

    cout<<"A media das idades eh: "<<media;
    
    return 0;
}