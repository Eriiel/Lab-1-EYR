#include <iostream>
#include <string>
using namespace std;

int main() {
    string c, CU, CC;
    
    for (int i = 1; i <= 3; ++i) {
        cout << "Introduzca una cadena de caracteres: ";  
        cin >> c;
        CC = CC + c;
    }
    
    cout << "Las cadenas unificadas son: " << CC << endl;
    
    return 0;
}
