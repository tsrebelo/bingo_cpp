/**
 * @file bingo.cpp
 * @author Telma Rebelo
 * @brief Jogo do Bingo
 * @date 2024-01-19
 * 
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <unistd.h>
using namespace std;

const int numLinhasCartao           = 5;
const int numColunasCartao          = 5;
const int numColunasPainel          = 20;
const int intervlaoEntreBolas       = 500000;
const int msgPause                  = 2000000;

int sorteados       = 0;
int numSorteado     = 0;
int anterior        = 0;

int numDeBolas, tipoSorteio, numDeCartoes;

