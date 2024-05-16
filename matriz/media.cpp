#include<iostream>
using namespace std;

int main(){

    double notas [15];
    double soma = 0;

    for (int i = 0; i < 15; i++)
    {
        cout<<"Digite sua nota: "<<endl;
        cin>>notas[i];

        soma += notas[i];

    }

    double media = soma / 15;

    cout<<"A media das notas eh: "<<media;

    return 0;
    
}