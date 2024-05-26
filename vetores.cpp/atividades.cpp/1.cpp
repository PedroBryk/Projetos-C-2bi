#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector <int> valores (20);

    int maior = 1;
    int menor=999999;
    int posica_maior;
    int posica_menor;

    for (int i = 0; i < 20; i++)
    {
        cout<<"Digite o valor da "<<(i+1)<<" posicao: ";
        cin>>valores.at(i);

        if(valores.at(i) > maior){

             maior = valores.at(i);

            posica_maior = i;

        }

         if(valores.at(i) < menor){

             menor = valores.at(i);

            posica_menor = i;
            
        }

    }
       
       cout<<"O maior numero digitado no vetor eh: "<<maior<<" e esta na posicao "<<posica_maior<<endl;

       cout<<"O menor numero digitado no vetor eh: "<<menor<<" e esta na posicao "<<posica_menor;

    return 0;
    
}