#include<iostream>
using namespace std;

int main(){

    int matriz [3] [3];
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            cout<<"Digite os valores para a matriz:"<<endl;
            cin>> matriz [i] [j];
        }
        
    }

    cout<<"Matriz:"<<endl;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            cout<< matriz [i] [j];
        }

        cout<<endl;
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            if (matriz [i] [j] % 2 == 0)
            {
                pares++;
            }else{
                impares++;
            }
            
        }
        
    }

    cout<<"A quantidade de numeros pares na matriz eh:"<<pares<<endl;

    cout<<"A quantidade de numeros impares na matriz eh:"<<impares<<endl;
    
    return 0;
}