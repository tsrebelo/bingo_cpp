#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){

    srand((unsigned) time(0));

    int sorteio;
    cout << "Escolhe a quantidade de números para o teu sorteio (75, 90 ou 100): ";
    cin >> sorteio;


    int numerosMax;

    switch (sorteio){

        case 75:
        numerosMax = 75;
        break;

        case 90:
        numerosMax = 90;
        break;

        case 100:
        numerosMax = 100;
        break;

      default:
        cout << "Número de sorteio inválido." << endl;
        break;
    }

    
    cout << "Sorteio de " << numerosMax << " números" << endl;
    return 0;
}
