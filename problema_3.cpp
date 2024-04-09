#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    char caracter;
    cout << "\nIntroduzca una cadena: ";
    cin.ignore();
    getline(cin, cadena);
    cout << "Introduzca el caracter a buscar: ";
    cin >> caracter;
    if (cadena.find(caracter) != string::npos) {
        cout << "El caracter '" << caracter << "' se encuentra en la cadena.\n";
    } else {
        cout << "El caracter '" << caracter << "' no se encuentra en la cadena.\n";
    }
    return 0;
}
