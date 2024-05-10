#include<iostream>
using namespace std;

int main(){

int voto;
int voto_antonio = 0;
int voto_simao = 0;
int fim = 3;

do
{
    cout<<"Digite o numero candidato que voce deseja votar: "<<endl;
    cin>>voto;

    switch (voto)
    {
    case 1:
        voto_antonio++;
        break;
    
    case 2:
        voto_simao++;
        break;
    
    default:
        break;
    }
    
} while (voto != fim);

if(voto_antonio > voto_simao){

    cout<<"O ganhador eh Antonio com "<<voto_antonio<<" votos"<<endl;

}else if(voto_simao > voto_antonio){

    cout<<"O ganhador eh Simao com "<<voto_simao<<" votos"<<endl;

}else if(voto_simao == voto_antonio){

    cout<<"Houve um empate, ambos ganharam "<<voto_antonio<<" votos"<<endl;
}

return 0;

}