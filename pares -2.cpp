#include<iostream>
using namespace std;

int main(){

    cout<<"Pares de 1 a 100"<<endl;

    for (int i = 0; i <= 100; i++)
    {
        if(i % 2 == 0){

            cout<<i<<endl;

        }
    }
    
    
    return 0;
}