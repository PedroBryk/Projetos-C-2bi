#include<iostream>
using namespace std;

int main(){

    int numeros [10];
    int conta_pares = 0;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Digite um numero: "<<endl;
        cin>> numeros[i];

    }

    for (int i = 0; i < 10; i++)
    {
        
        if(numeros[i] % 2 == 0){

            conta_pares++;

        }
    }

    cout<<"Os numeros pares sao: "<<conta_pares;

    return 0;
}