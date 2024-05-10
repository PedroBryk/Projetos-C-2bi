#include<iostream>
using namespace std;

int main(){

    double nota1;
    double nota2;
    double nota3;
    double nota4;
    double media;
    char continuar;

    do
    {
        cout<<"Insira sua priemira nota: "<<endl;
        cin>>nota1;

        cout<<"Insira sua segunda nota: "<<endl;
        cin>>nota2;

        cout<<"Insira sua terceira nota: "<<endl;
        cin>>nota3;

        cout<<"Insira sua quarta nota: "<<endl;
        cin>>nota4;

        media = (nota1 * 1 )+(nota2 * 2 )+(nota3 * 3 )+(nota4 * 4 );

        if (media >= 7 && media <= 10) {
            cout << "Aprovado" << endl;
        } else if (media >= 4 && media < 7) {
            cout << "Em recuperação" << endl;
        } else {
            cout << "Reprovado" << endl;
        }

        cout << "Deseja calcular uma nova média? (s/n): ";
        cin >> continuar;


    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}