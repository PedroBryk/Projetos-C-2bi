#include<iostream>
using namespace std;

int main(){

    char vogais [5] {'a','e','i','o','u'};

    cout<<"Primeira vogal: "<<vogais[1]<<endl;
    cout<<"Ultima vogal: "<<vogais[4]<<endl;

    double temp [] {90.1, 20.2, 90.3};

    cout<<"Primeira temp eh: "<<temp[0]<<endl;

    temp[0] = 100.8;

    cout<<"Primeira temp eh: "<<temp[0]<<endl;

    int pont[5] {5, 4, 3, 2 , 1};

    for (int i = 0; i <= 4; i++)
    {
        cout<<"A"<<pont[i]<<endl;

    }
    
    return 0;
}