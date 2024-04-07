#include <iostream>
#include <string>
using namespace std;
int main()

{
    std:: string cadena;
	int numerodeC;
	cout<<"Introduzca su cadena de caracteres: ";  
	cin>>cadena;
	
	numerodeC = cadena.length();
	cout<<"Su cadena tiene esta cantidad de caracteres: " <<numerodeC<<"\n";
	
	system("pause");
    return 0;
}


