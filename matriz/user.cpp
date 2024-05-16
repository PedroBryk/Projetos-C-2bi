#include<iostream>
using namespace std;

int main(){

    int linha;
    int coluna;

    int maior;
    int menor;

    int soma = 0;

    char select;

    bool continuar = true;

    do
    {

    cout<<"Digite quantas linhas tera sua matriz: "<<endl;
    cin>>linha;

    cout<<"Digite quantas colunas tera sua matriz: "<<endl;
    cin>>coluna;

    int matriz [linha] [coluna];

    cout<<"Digite os valores para preencher sua matriz: "<<linha<<" X "<<coluna<<endl;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> matriz [i] [j];

            soma += matriz [i] [j];

            if(i == 0 && j == 0){

                menor = matriz [i] [j];

                maior = matriz [i] [j];

            }

            if (matriz [i] [j] > maior)
            {

                maior = matriz [i] [j];

            }

             if (matriz [i] [j] < menor)
            {

                menor = matriz [i] [j];
                
            }
            
        }
        
    }
    
    cout<<"Aqui esta a sua matriz: "<<endl;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {

            cout<< matriz [i] [j];

        }

        cout<<endl;
        
    }

    cout<<"O maior numero da matriz eh: "<<maior<<endl;

    cout<<"O menor numero da matriz eh: "<<menor<<endl;

    cout<<"A soma de todos os valores da matriz eh: "<<soma<<endl;

    cout<<"Deseja continuar? (S/N) "<<endl;
    cin>>select;

    if (select == 'n' || select == 'N')
    {
        continuar = false;
    }
    
    } while (continuar);

    cout<<"Obrigado por participar :)";

    return 0;

}
    

    