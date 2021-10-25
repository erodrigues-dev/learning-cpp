#include <string>
#include <map>
#include <vector>

namespace Forca {

    using namespace std;
    
    void imprimir(string palavra_secreta, map<char, bool>& chutou, bool finalizado = false);
    void imprimir_chutes_errados(vector<char>& chutes_errados);
    bool letra_existe(string palavra_secreta, char chute);
    bool acertou_palavra(string palavra_secreta, map<char, bool>& chutou);
    bool enforcado(string palavra_secreta, vector<char>& chutes_errados);
    void chuta(string palavra_secreta, map<char, bool>& chutou, vector<char>& chutes_errados);
    void fim_do_jogo(string palavra_secreta, map<char, bool>& chutou, bool acertou, bool enforcou);
    string sortear_palavra_secreta();

}