#include<iostream>
using namespace std;

int main(){

    int valor;

    cout<<"Insira o valor que voce quer imprimir a tabuada: "<<endl;
    cin>>valor;

   for ( int i = 1; i <= 10; i++)
   
   {

    if(valor >= 1 && valor <= 10)

    cout<<"A tabuada de: "<<valor<<" X "<<i<<" eh "<< i*valor <<endl;

   }
   
    
    return 0;
}