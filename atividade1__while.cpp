#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Digite um numero entre 23 e 47"<<endl;
    cin>>num;

    while (num >= 23 && num <= 47)

    {

    cout<<"Digite um numero entre 23 e 47"<<endl;
    cin>>num;

    }

    cout<<"Muito obrigado!";


    //bool

    num = 0;

    bool fim = true;

    while (fim)
    {
        cout<<"Insira um valor inteiro entre 1 e 5"<<endl;
        cin>>num;

        if (num <= 1 || num >= 5)

        {

            cout<<"Esse valor nao se encontra no intervalo, tente novamente"<<endl;

        }else{

            cout<<"Obrigado!"<<endl;
            fim = false;

        }
        
    }

    //contagem regressiva

    num = 0;
    cout<<"Digite um valor positivo e inicie a contagem regressiva"<<endl;
    cin>>num;

    while (num > 0)
    {
        cout<< num <<endl;

        --num;

    }
    

    cout<<"decolar!"<<endl;

    //do while

    int RA;
    int RA_correto = 123;
    bool verifica = true;

    do
    {
        cout<<"Digite seu RA: "<<endl;
        cin>>RA;

        if (RA == RA_correto)
        {

            verifica = false;

        }else{

            cout<<"O RA digitado esta incorreto tente novamente"
        }
        
    } while (verifica);

    cout<<"Bem vindo ao sistema de cadastro!";

    //calculo terreno

    double altura;
    double comprimento;
    char selecao;

    do
    {
        cout<<"Digite a altura"<<endl;
        cin>>altura;

        cout<<"Digite o comprimento"<<endl;
        cin>>comprimento;

        cout<<"A area eh:"<< altura*comprimento;

        cout<<"Deseja fazer outros calculos S/N?"<<endl;
        cin>>selecao;

    } while (selecao == 'S'  || selecao == 's');

    cout<<"Calculo realizado!";
    
    
    
}