#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>

using namespace std;

string PALAVRA_SECRETA;
map<char, bool> chutou;
vector<char> chutes_errados;
bool enforcou = false;
bool acertou = false;

void imprimir(bool finalizado);
void imprimir_chutes_errados();
bool letra_existe(char chute);
bool acertou_palavra();
bool enforcado();
void chuta();
void fim_do_jogo();
void sortear_palavra_secreta();

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

void imprimir(bool finalizado = false)
{
  cout << "\n";
  for (char letra : PALAVRA_SECRETA)
  {
    if (finalizado || chutou[letra])
      cout << letra << " ";
    else
      cout << "_ ";
  }
  cout << endl;
}

void imprimir_chutes_errados()
{
  if (chutes_errados.size() > 0)
  {
    cout << "Chutes errados: ";
    for (char l : chutes_errados)
      cout << l << " ";
    cout << endl;
  }
}

bool letra_existe(char chute)
{
  for (char letra : PALAVRA_SECRETA)
  {
    if (chute == letra)
      return true;
  }

  return false;
}

bool acertou_palavra()
{
  bool acertou = true;
  for (char l : PALAVRA_SECRETA)
  {
    if (!chutou[l])
    {
      acertou = false;
      break;
    }
  }
  return acertou;
}

bool enforcado()
{
  return chutes_errados.size() > PALAVRA_SECRETA.size();
}

void chuta()
{
  char chute;
  cout << "Qual é o seu chute? ";
  cin >> chute;

  if (letra_existe(chute))
  {
    // cout << "Vc acertou!" << endl;
    chutou[chute] = true;
  }
  else
  {
    chutes_errados.push_back(chute);
    cout << "Vc errou!" << endl;
  }

  acertou = acertou_palavra();
  enforcou = enforcado();
}

void fim_do_jogo()
{
  imprimir(true);

  cout << endl;
  cout << "Jogo finalizado" << endl;
  if (acertou)
    cout << "Vc ganhou!" << endl;
  if (enforcou)
  {
    cout << "Vc foi enforcado!" << endl;
  }
}

void sortear_palavra_secreta()
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

  PALAVRA_SECRETA = palavras[indice];
}