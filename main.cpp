#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string inverterPalavra(const string& palavra) {
    int tamanho = palavra.length();
    string palavraInvertida = "";
    for (int i = tamanho - 1; i >= 0; i--) {
        palavraInvertida += palavra[i];
    }
    return palavraInvertida;
}

string inverterFrase(const string& frase) {
    stringstream ss(frase);
    string palavra;
    string fraseInvertida = "";
    while (ss >> palavra) {
        if (!fraseInvertida.empty()) {
            fraseInvertida += " ";
        }
        fraseInvertida += inverterPalavra(palavra);
    }
    return fraseInvertida;
}

int main() {
    char continuar;
    do {
        string entrada;
        cout << endl;
        cout << endl;
        cout << "  ----------------------------" << endl;
        cout << "    -------SARAIVA----------  "<< endl;
        cout << "  ----------------------------" << endl;
        cout << endl;
        cout << "  ----------------------------" << endl;
        cout << "      Digite uma frase: "<< endl;
        cout << "  ----------------------------" << endl;
        cout << endl;
        cout << endl;
        getline(cin, entrada);

        string fraseInvertida = inverterFrase(entrada);
        cout << endl;
        cout << endl;
        cout << "Frase invertida: " << fraseInvertida << endl;
        cout << endl;
        cout << "  -------------------------------" << endl;
        cout << "Deseja escrever outra frase? (s/n): ";
        cin >> continuar;
        cin.ignore(); // Limpar o buffer do teclado

    } while (continuar == 's' || continuar == 'S');
    cout << "  ----------------------------" << endl;
    cout << "  Programa finalizado." << endl;
    cout << "  ----------------------------" << endl;
    return 0;
}
