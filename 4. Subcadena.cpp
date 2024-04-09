#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
	string cad1;
	int lon, lon2, i;
	string subcad;
	
	cout << "Ingrese su cadena: ";
    getline(cin, cad1);
    lon = cad1.length();
    
if (lon > 1) {
        cout << "Su cadena es la siguiente: " << cad1 << endl << "y su longitud es la siguiente (empezando de 0): " << lon << endl;
    } else {
        cout << "Su cadena es muy corta, ingrese otra" << endl;
        return 0;
    }
    
    do {
    	
    cout << "Ingrese la posicion inicial de su subcadena : ";
            if (!(cin >> i)|| i < 0 || i >= lon) {
                cout << "La posicion inicial debe ser un numero en rango con la cadena" << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break; 
        }
        
    } while (true);
            
    do {
        cout << "Ingrese la longitud de su subcadena: ";
        if (!(cin >> lon2)||lon2 <= 0) {
            cout << "La longitud debe ser un numero en rango desde la posicion inicial" << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
            } else {
                break; 
            }
    
    
    } while (true);
                
            if (i >= 0 && i < lon) {
                subcad = cad1.substr(i, lon2);
                cout << "Su subcadena es: " << subcad << endl;
            } else {
                cout << "Su subcadena debe ser un numero en rango con la cadena" << endl;
                return 0;
            }
            
        }

	 
    
        

    






    

	
	
	

   
   


