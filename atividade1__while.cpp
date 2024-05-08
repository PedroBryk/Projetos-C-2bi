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
    
}