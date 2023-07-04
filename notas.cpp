#include <bits/stdc++.h>

using namespace std;


int main(){
    start:
    int nota;
    char resposta;
    cout << "\n digite sua nota:";
    cin >> nota;

    if (nota >=70){
        cout<<"\n\nParabéns, foi aprovado!\n\n";

    }else if (nota >=50){
        cout <<"\n\nestás de recuperação\n\n";

    }else {

        cout <<"\n\nreprovado, boa sorte na próxima!\n\n";

    }
    cout <<"deseja reiniciar o teste? S/N:";
    cin >> resposta;
    if (resposta == 's' or resposta == 'S'){
        goto start;
    }else if (resposta =='n' or resposta == 'N'){
        cout<<"\n\n programa finalizado\n\n";
    }

    

    return 0;
}