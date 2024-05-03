#include<iostream>
using namespace std;

int main(){

    int numero;
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 10; i++)
    {
     
    cout << "Insira o " << i+1 << " numero: ";
    cin>>numero;

    if(numero % 2 == 0){

        pares++;

    }else{

        impares++;

    }


    }

    cout<<"A quantidade de numeros pares eh: "<<pares<<endl;

    cout<<"A quantidade de numeros impares eh: "<<impares<<endl;

    return 0;

}