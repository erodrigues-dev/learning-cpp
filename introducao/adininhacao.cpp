#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  cout << "**************************************" << endl;
  cout << "* BEM VINDOS AO JOGO DA ADIVINHAÇÃO! *" << endl;
  cout << "**************************************" << endl;

  cout << "Escolhe o seu nivel de dificuldade: " << endl;
  cout << "Facil (F), Medio (M) ou Dificil (D)" << endl;

  char dificuldade;
  cin >> dificuldade;

  int numero_tentativas;
  if (dificuldade == 'F')
    numero_tentativas = 15;
  else if (dificuldade == 'M')
    numero_tentativas = 10;
  else
    numero_tentativas = 5;

  srand(time(NULL));
  const int NUMERO_SECRETO = rand() % 100;

  int chute;
  int tentativas = 0;
  bool acertou = false;
  double pontos = 1000.0;

  for (tentativas = 1; tentativas <= numero_tentativas; tentativas++)
  {
    cout << "Tentativa " << tentativas << endl;
    cout << "Qual é o seu chute? ";
    cin >> chute;

    cout << "O valor do seu chute é: " << chute << endl;

    acertou = chute == NUMERO_SECRETO;
    bool ehMaior = chute > NUMERO_SECRETO;

    if (acertou)
    {
      cout << "Parabéns vc acertou!" << endl;
      break;
    }
    else if (ehMaior)
      cout << "Seu chute foi MAIOR" << endl;
    else
      cout << "Seu chute foi MENOR" << endl;

    double ponto_perdidos = abs((chute - NUMERO_SECRETO) / 2.0);
    pontos = pontos - ponto_perdidos;
  }

  cout << "Fim do jogo" << endl;

  if (acertou)
  {
    cout << "Vc acertou em " << tentativas << " tentativas" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuação foi: " << pontos << endl;
  }
  else
  {
    cout << "Vc perdeu!" << endl;
  }
}