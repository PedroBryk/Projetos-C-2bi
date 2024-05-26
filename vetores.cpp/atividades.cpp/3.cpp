#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector <int> valores (20);

    vector <int> valores_pares;

    vector <int> valores_impares;

    int maior = -999999;
    int menor = 999999;
    int posicao_maior;
    int posicao_menor;

    for (int i = 0; i < 20; i++)
    {
        cout << "Digite o valor da " << (i+1) << " posicao: ";
        cin >> valores.at(i);

        if(valores.at(i) % 2 == 0)
        {
            valores_pares.push_back(valores.at(i));
        }
        else
        {
            valores_impares.push_back(valores.at(i));
        }

        if(valores.at(i) > maior)
        {
            maior = valores.at(i);
            posicao_maior = i;
        }

        if(valores.at(i) < menor)
        {
            menor = valores.at(i);
            posicao_menor = i;
        }
    }

    cout << "Os valores pares digitados no vetor sao: ";
    for(int i = 0; i < valores_pares.size(); i++)
    {
        cout << valores_pares.at(i) << " ";
    }
    cout << endl;

    cout << "Os valores impares digitados no vetor sao: ";
    for(int i = 0; i < valores_impares.size(); i++)
    {
        cout << valores_impares.at(i) << " ";
    }
    cout << endl;

    cout << "O maior numero digitado no vetor eh: " << maior << " e esta na posicao " << posicao_maior << endl;
    cout << "O menor numero digitado no vetor eh: " << menor << " e esta na posicao " << posicao_menor << endl;

    return 0;
}
