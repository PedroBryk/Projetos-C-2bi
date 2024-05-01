#include<iostream>
using namespace std;

int main(){

    int idades;
    int soma;

    cout<<"Insira a quantidade de medias que voce deseja calcular: "<<endl;
    cin>>idades;

   for ( int i = 1; i <= idades; i++)
   
   {

    int idade;

    cout<<"Insira o valor da idade: ";
    cin>>idade;
    
    int soma = idade;

   }

    float media = soma / idades;

    cout<<"A media das idades eh: "<<media;
   
    
    return 0;
}