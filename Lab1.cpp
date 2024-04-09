#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    int respuesta;
    
    do {
    cout << "Ingrese una opcion: \n";
    cout << "Ingrese 1 para calcular la longitud de una cadena.\n";
    cout << "Ingrese 2 para concatenar 3 cadenas que usted ingrese y calcular su longitud.\n";
    cout << "Ingrese 3 para buscar un caracter de una cadena que introduce.\n";
    cout << "Ingrese 4 para generar una subcadena a partir de una cadena dada por usted.\n";
    cout << "Ingrese 5 para reemplazar una parte de una cadena por otra.\n";
    cout << "Ingrese 0 para salir.\n";
    cin >> respuesta;
    cin.ignore(); // Limpiar el buffer de entrada

    switch (respuesta) {
        case 1: {
            string cadena;
            int numerodeC;
            cout << "Introduzca su cadena de caracteres: ";  
            getline(cin, cadena);
            numerodeC = cadena.length(); //.length lee la cantidad de caracteres
            cout << "Su cadena tiene esta cantidad de caracteres: " << numerodeC << "\n";
            system("pause");
            break;
        }
        case 2: {
           string c, CC = "";
        int n, nc;

        for (int i = 1; i <= 3; ++i) {
        n = 0; // Inicializar n antes del bucle do-while

        do {
            cout << "Introduzca una cadena de caracteres: ";
            getline(cin, c);

            if (c.length() == 0) {
                cout << "No puede dejar una cadena vacia" << endl;
            } else if (c[0] == ' ') {
                cout << "La cadena debe contener al menos un caracter antes de los espacios" << endl;
            } else {
                n = 1;
            }
           } while (n == 0); // Cambiar la condición de salida del bucle do-while

           CC = CC + c;
          }
            nc = CC.length();
            cout << "Las cadenas unificadas son: " << CC << endl;
            cout << "La longitud de su concatenacion es: " << nc << endl;
            break;
        }
        case 3: {
        	string cadena;
            char caracter;
            cout << "\nIntroduzca una cadena: ";
            cin.ignore();
            getline(cin, cadena);
            cout << "Introduzca el caracter a buscar: ";
            cin >> caracter;
            if (cadena.find(caracter) != string::npos) {
                cout << "El caracter '" << caracter << "' se encuentra en la cadena.\n";
    }    else {
                cout << "El caracter '" << caracter << "' no se encuentra en la cadena.\n";
    }
            break;
        }
        
        
        case 4: {
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
                break;
            }
        
        
        case 5: {
        	string c, sc1, sc2;
			int n;

            do{

            cout << "Ingresa una cadena: ";
            getline(cin, c);

            cout << "Digite el caracter que desea eliminar para crear la subcadena a eliminar: ";
            getline(cin, sc1);

            cout << "Ingrese el nuevo caracter a la subcadena para reemplazar: ";
            getline(cin, sc2);

            if (c.length() == 0 ||sc1.length() == 0||sc2.length() == 0) {
            cout << "No pueden dejar la cadena o subcadenas vacias" << endl;
    }       else if(c[0]==' '||sc1[0]==' '||sc2[0]==' '){
    	    cout << "La cadena o subcadenas deben contener minimo un caracter antes que espacios" << endl;
    }       else {
            size_t l = c.find(sc1);
            if (l != string::npos) {
            c.replace(l, sc1.size(), sc2);
            cout << "La cadena nueva es: " << c << endl;
			n = 1;	
        }   else {
            cout << "La subcadena que quiere eliminar para reemplazar no existe." << endl;
        }
    }
}while(n != 1);
			break;
		}
		
        case 0: {
                int opc;
                do {
                    cout << "\t¿Desea salir del programa?" << endl;
                    cout << "1. Si" << endl;
                    cout << "2. No" << endl;
                    cout << "Opcion: ";
                    cin >> opc;

                    if (opc == 1) {
                        cout << "El programa ha terminado :D" << endl;
                        return 0;
                    } else if (opc == 2) {
                        break; // Sale del bucle interno
                    } else {
                        cout << "Opcion no valida, seleccione alguna de las 2" << endl;
                    }
                } while (true);
                break;
            }
            default:
                cout << "Opción no válida. Por favor, seleccione una opción del menú." << endl;
                break;
        }
    } while (true); //Bucle para volver al menu principal

    return 0;
}
        	


    
