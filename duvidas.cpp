#include <iostream>
using namespace std;
// int: ocupa, na memória, 4 bytes(32 bites) 00000000 00000000 00000000 00000000
//char: ocupa, na memória, 1 byte(8 bites) 00000000
//bool: ocupa, na memória, 1 byte(8 bites) 00000000(false) 00000001(true)
//float: ocupa, na memória, 4 bytes(32 bites) 00000000 00000000 00000000 00000000
//double: ocupa, na memória, 8 bytes(64 bites)
//long: ocupa, na memória, 8 bytes(64 bites)

//OPÇÕES DE MENU

//cartões e cores
string red          = "\u001b[31m";
string blue         = "\u001b[34m";
string green        = "\u001b[32m";
string reset        = "\u001b[0m";
string bold         = "\u001b[1m";
string figletFont   = "big"; //big, slant, small, mini, script, smslant

int tipoSorteio;

void optionMenu(){
    do{
        cout << blue
        << "--------------------------------\n"
        << blue << bold
        << "M E N U      P R I N C I P A L\n" << reset << blue
        << "--------------------------------" << endl
        << "1 - Sorteio Manual\n"
        << "2 - Sorteio Automático\n"
        << "3 - Gerar Cartões\n"
        << "4 - Sair\n"
        << "--------------------------------" << endl
        << bold << "Opção: " << reset << blue;
    cin >> tipoSorteio;
    } while(tipoSorteio < 1 || tipoSorteio > 4);
}

int main(){

    optionMenu();
    system("clear || cls");             //limpa o ecrã

    return 0;
}