#include<iostream>
using namespace std;

int main(){

    int tab = 3;
    int tamanho = 10;
    int i;

    for ( i = 0 ; i <= tamanho; i++)
    {
        cout<<tab<<" X "<<i<<" : "<< tab*i<<endl;

    }

    system("pause");


    for ( i = tamanho ; i >= 0; i--)
    {
        cout<<i<<endl;

    }

    system("pause");

    for ( i = 0; i <= 50; i++)
    {
        if(i % 2==0 ){

            cout<<i<<endl;
            
        }
    }
       
    return 0;

}