#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> valores;
    int valor;

    char choose;

    do
    {
        cout<<"Digite um valor para o vetor: "<<endl;

        cin>>valor;

        valores.push_back(valor);

        cout<<"Deseja inserir mais valores? (S/N)"<<endl;
        cin>>choose;

    } while (choose == 's' || choose == 'S');
    
    cout<<"A quantidade de valores inseridas no vetor eh: "<<valores.size()<<endl;

    cout<<"Os valores inseridos no vetor sao: "<<endl;
    for (int i = 0; i < valores.size(); i++)
    {
        cout<<valores.at(i)<<" ";
    }
    
    cout<<endl;

    return 0;

    }