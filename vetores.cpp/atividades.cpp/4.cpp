#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector <int> numeros(10);

    vector <int>valores_maiores;

    vector <int> valores_menores;

    int valor_aparece = 0;

    int valor_referencia;

    cout<<"Digite um valor de referencia"<<endl;
    cin>>valor_referencia;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o valor da " << (i+1) << " posicao: ";
        cin >> numeros.at(i);

        if (numeros.at(i) > valor_referencia)
        {

            valores_maiores.push_back(numeros.at(i));

        }

        if(numeros.at(i) < valor_referencia){

            valores_menores.push_back(numeros.at(i));

        }

        if(numeros.at(i) == valor_referencia){

            valor_aparece++;

        }
        

    }

    cout<<"O valor de referencia eh: "<<valor_referencia<<endl;

    cout<<"Os numeros digitados no vetor que sao maiores que "<<valor_referencia<<" sao:"<<endl;

    for (int i = 0; i < valores_maiores.size(); i++)
    {

        cout<<valores_maiores.at(i)<<endl;

    }
    
    cout<<"A quantidade de numeros menores que "<<valor_referencia<<" sao:"<<endl;

     for (int i = 0; i < 1; i++)
    {

        cout<<valores_menores.size()<<endl;

    }

    cout<<"O valor de referencia aparece "<<valor_aparece<<" vezes no vetor!"<<endl;
   
    return 0;
}