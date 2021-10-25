#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>

#include "funcoes.hpp"

using namespace std;


int main()
{
    
    string palavra_secreta;
    map<char, bool> chutou;
    vector<char> chutes_errados;
    bool enforcou = false;
    bool acertou = false;
    
    cout << "******************************" << endl;
    cout << "* Bem vindo ao jogo da forca *" << endl;
    cout << "******************************" << endl;
    cout << "\n";

    palavra_secreta = Forca::sortear_palavra_secreta();

    while (!acertou && !enforcou)
    {
        Forca::imprimir(palavra_secreta, chutou);
        Forca::imprimir_chutes_errados(chutes_errados);
        Forca::chuta(palavra_secreta, chutou, chutes_errados);
        acertou = Forca::acertou_palavra(palavra_secreta, chutou);
        enforcou = Forca::enforcado(palavra_secreta, chutes_errados);
    }

    Forca::fim_do_jogo(palavra_secreta, chutou, acertou, enforcou);
}
