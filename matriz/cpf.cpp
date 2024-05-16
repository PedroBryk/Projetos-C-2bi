#include<iostream>
using namespace std;

int main(){

    string matriz [2] [5];
     for (int i = 0; i < 5; i++)
     {

        cout<<"Digite nome: ";
        cin>>matriz [0] [i];
        cout<<"Digite cpf: ";
        cin>>matriz [1] [i];

     }

     for (int i = 0; i < 5; i++)
     {
        cout<<matriz [0] [i];
        
        cout<<matriz [1] [i];

        cout<<endl;

     }
     
     return 0;
     
}