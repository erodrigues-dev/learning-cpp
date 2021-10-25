#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>

using namespace std;

void imprimir(string palavra_secreta, map<char, bool>& chutou, bool finalizado = false)
{
  cout << "\n";
  for (char letra : palavra_secreta)
  {
    if (finalizado || chutou[letra])
      cout << letra << " ";
    else
      cout << "_ ";
  }
  cout << endl;
}

void imprimir_chutes_errados(vector<char>& chutes_errados)
{
  if (chutes_errados.size() > 0)
  {
    cout << "Chutes errados: ";
    for (char l : chutes_errados)
      cout << l << " ";
    cout << endl;
  }
}

bool letra_existe(string palavra_secreta, char chute)
{
  for (char letra : palavra_secreta)
  {
    if (chute == letra)
      return true;
  }

  return false;
}

bool acertou_palavra(string palavra_secreta, map<char, bool>& chutou)
{
  bool acertou = true;
  for (char l : palavra_secreta)
  {
    if (!chutou[l])
    {
      acertou = false;
      break;
    }
  }
  return acertou;
}

bool enforcado(string palavra_secreta, vector<char>& chutes_errados)
{
  return chutes_errados.size() > palavra_secreta.size();
}

void chuta(string palavra_secreta, map<char, bool>& chutou, vector<char>& chutes_errados)
{
  char chute;
  cout << "Qual é o seu chute? ";
  cin >> chute;

  if (letra_existe(palavra_secreta, chute))
  {
    // cout << "Vc acertou!" << endl;
    chutou[chute] = true;
  }
  else
  {
    chutes_errados.push_back(chute);
//    cout << "Vc errou!" << endl;
  }

}

void fim_do_jogo(string palavra_secreta, map<char, bool>& chutou, bool acertou, bool enforcou)
{
  imprimir(palavra_secreta, chutou, true);

  cout << endl;
  cout << "Jogo finalizado" << endl;
  if (acertou)
    cout << "Vc ganhou!" << endl;
  if (enforcou)
  {
    cout << "Vc foi enforcado!" << endl;
  }
}

string sortear_palavra_secreta()
{
  cout << "lendo palavras no arquivo..." << endl;

  ifstream arquivo;
  arquivo.open("palavras.txt");
  
  vector<string> palavras;

  while(true)
  {
    if(arquivo.eof())
      break;

    string palavra;
    arquivo >> palavra;
    palavras.push_back(palavra);
  }

  
  arquivo.close();

  cout << palavras.size() << " palavras encontradas" << endl;
  cout << "sorteando palavras..." << endl;

  srand(time(0));
  int indice = rand() % palavras.size();

  cout << "palavra sorteada! vamos começar!" << endl << endl;

  return palavras[indice];
}