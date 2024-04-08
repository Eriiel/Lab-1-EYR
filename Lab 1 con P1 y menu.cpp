#include <iostream>
#include <string>
using namespace std;
int main()

{
    int respuesta;
    cout << "Ingrese una opcion: \n";
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
	getline(cin,cadena);
	
	numerodeC = cadena.length();
	cout<<"Su cadena tiene esta cantidad de caracteres: " <<numerodeC<<"\n";
			break;
		}
	
	case 2: {
		string c, CC;
    
    for (int i = 1; i <= 3; ++i) {                           /*Determina la cantidad de veces que el ciclo se repite que son 3*/
        cout << "Introduzca una cadena de caracteres: ";     /*Permite digitar las cadenas y por cada vuelta del ciclo*/
        getline(cin, c);                                     /*Al usar getline permite insertar e imprimir cadenas con tilde y ñ*/
        CC = CC + c;                                         /*El acumulador permite unir las 3 cadenas que se insertar en el ciclo*/
    }
    
    cout << "Las cadenas unificadas son: " << CC << endl;    /*Imprime la cadena unificada*/
		break;
	}
	
	case 0: {
		cout<<"A cerrado el programa\n";
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


