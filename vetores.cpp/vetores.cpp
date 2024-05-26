#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector <char> vogais {'a', 'e', 'i', 'o', 'u'};

    cout<<vogais[0];

    cout<<vogais.at(4);

    //

     vector <int> pontuacao {100, 98, 89};

     for (int i = 0; i < 3; i++)
     {

        cout<<"Valor "<<(i+1)<<" : "<<pontuacao.at(i);

     }

     pontuacao.at(0) = 100;

    int pontuacaoa_add;

     cout<<"Digite um novo valor para adicionar a este vetor: ";
     cin>>pontuacaoa_add;

     pontuacao.push_back(pontuacaoa_add);

     cout<<"Digite um novo valor: ";
     cin>>pontuacaoa_add;

     pontuacao.push_back(pontuacaoa_add);

     cout<<"Existem "<<pontuacao.size()<<" pontuacoes no vetor!"<<endl;

     int tamanho_vetor = pontuacao.size();

     for (int i = 0; i < tamanho_vetor; i++)
     {

        cout<<"Valor "<<(i+1)<<" do vetor: "<<pontuacao.at(i);

     }
     
     

    return 0;
}
