#include<iostream>
using namespace std;

int main(){

    int senha_correta = 1234;
    int senha_fornecida;
    bool verifica = true;

    do
    {
    cout<<"Insira sua senha: "<<endl;
    cin>>senha_fornecida;

    if (senha_fornecida == senha_correta)
    {

        verifica = false;


    }else{

        cout<<"Senha incorreta!"<<endl;

    }
    
    } while (verifica);

    cout<<"Seja bem-vindo!"<<endl;
    

}