#include <iostream>
#include <string>
using namespace std;

int main() {
    string c, CC;
    
    for (int i = 1; i <= 3; ++i) {                           /*Determina la cantidad de veces que el ciclo se repite que son 3*/
        cout << "Introduzca una cadena de caracteres: ";     /*Permite digitar las cadenas y por cada vuelta del ciclo*/
        getline(cin, c);                                     /*Al usar getline permite insertar e imprimir cadenas con tilde y ñ*/
        CC = CC + c;                                         /*El acumulador permite unir las 3 cadenas que se insertar en el ciclo*/
    }
    
    cout << "Las cadenas unificadas son: " << CC << endl;    /*Imprime la cadena unificada*/
    
    return 0;
}
