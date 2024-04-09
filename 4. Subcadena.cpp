#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string cad1;
	int lon, lon2, i;
	string subcad;
	
	cout << "Ingrese su cadena: ";
    getline(cin, cad1);
    lon = cad1.length();
    
if (lon > 1) {
        cout << "Su cadena es la siguiente: " << cad1 << endl << "y su longitud es la siguiente: " << lon << endl;
    } else {
        cout << "Su cadena es muy corta, ingrese otra" << endl;
        return 0;
    }
    
    
    cout << "Ingrese la posicion inicial de su subcadena: ";
            if (!(cin >> i)) {
                cout << "La posicion inicial debe ser un numero en rango con la cadena" << endl;
                return 0;
            }
            
            cout << "Ingrese la longitud de su subcadena: ";
            cin >> lon2;
                
            if (i >= 0 && i < lon) {
                subcad = cad1.substr(i, lon2);
                cout << "Su subcadena es: " << subcad << endl;
            } else {
                cout << "Su subcadena debe ser un numero en rango con la cadena" << endl;
                return 0;
            }
            
        }

	 
    
        

    






    

	
	
	

   
   


