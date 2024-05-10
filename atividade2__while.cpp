#include<iostream>
using namespace std;

int main(){

    int contador = 1;
    double maior, numero;

    cout<<"Digite o primeiro numero: "<<endl;
    cin>>numero;

    while (contador < 10)
    {
        cout << "Digite o " << contador + 1 << "numero: ";
        cin >> numero;

        if (numero > maior) {
            maior = numero;
        }

        contador++;
    }

    cout << "O maior numero digitado eh: " << maior << endl;

    return 0;
    
}