#include <iostream>
#include <string>
int main()
{
    std:: string cadena;
	int numerodeC;
	std::cout<<"Introduzca su cadena de caracteres: ";  // La cadena se corta si hay un espacio 
	std::cin>>cadena;
	
	numerodeC = cadena.length();
	std::cout<<"Su cadena tiene esta cantidad de caracteres: " <<numerodeC<<"\n";
	
	system("pause");
    return 0;
}
