#include <iostream>
#include <string>
using namespace std;
int main()

{
    int respuesta;
    cout << "Ingrese una opción: \n";
    cout << "Ingrese 1 para calcular la longitud de una cadena.\n";
    cout << "Ingrese 2 para concatenar 3 cadenas que usted ingrese y calcular su longitud.\n";
    cout << "Ingrese 3 para buscar un caracter de una cadena que introduce.\n";
    cout << "Ingrese 4 para generar una subcadena a partir de una cadena dada por usted.\n";
    cout << "Ingrese 5 para reemplazar una parte de una cadena por otra.\n";
    cout << "Ingrese 0 para salir.\n";
    cin >> respuesta;
    
    switch (respuesta){
        case 1: {
        	std:: string cadena;
	int numerodeC;
	cout<<"Introduzca su cadena de caracteres: ";  
	cin>>cadena;
	
	numerodeC = cadena.length();
	cout<<"Su cadena tiene esta cantidad de caracteres: " <<numerodeC<<"\n";
			break;
		}
	
	case 2: {
		cout<<"Hola"; 
		break;
	}
	
	default: {
		cout<<"Su opcion no es valida";
		break;
	}
	
    }
	
	system("pause");
    return 0;
}


