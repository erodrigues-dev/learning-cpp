#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>

#include "funcoes.hpp"

using namespace std;

string PALAVRA_SECRETA;
map<char, bool> chutou;
vector<char> chutes_errados;
bool enforcou = false;
bool acertou = false;

int main()
{
  cout << "******************************" << endl;
  cout << "* Bem vindo ao jogo da forca *" << endl;
  cout << "******************************" << endl;
  cout << "\n";

  sortear_palavra_secreta();

  while (!acertou && !enforcou)
  {
    imprimir(false);
    imprimir_chutes_errados();
    chuta();
  }

  fim_do_jogo();
}
