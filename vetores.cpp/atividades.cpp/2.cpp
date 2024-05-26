#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector <int> valores (10);

    int positivos = 0;
    int negativos = 0;
    int zero = 0;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Digite um valor para o vetor"<<endl;
        cin>> valores.at(i);

        if(valores.at(i) == 0){

            zero++;

        }else if(valores.at(i) < 0){

            negativos++;

        }else if(valores.at(i) >=1 ){

            positivos++;
            
        }
    }

    cout<<"A quantidade de numeros positivos eh: "<<positivos<<endl;

    cout<<"A quantidade de numeros negativos eh: "<<negativos<<endl;

    cout<<"A quantidade de numeros iguais a zero eh: "<<zero<<endl;
    
    return 0;
    
}