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

    palavra_secreta = sortear_palavra_secreta();

    while (!acertou && !enforcou)
    {
        imprimir(palavra_secreta, chutou);
        imprimir_chutes_errados(chutes_errados);
        chuta(palavra_secreta, chutou, chutes_errados);
        acertou = acertou_palavra(palavra_secreta, chutou);
        enforcou = enforcado(palavra_secreta, chutes_errados);
    }

    fim_do_jogo(palavra_secreta, chutou, acertou, enforcou);
}
