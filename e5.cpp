#include <iostream>
using namespace std;

int main () {
	int edad;
	double pulsaciones; 
	char genero;
	cout << "Ingrese su edad: ";
	cin >> edad;
	cout << "Ingrese su genero (m/f): ";
	cin >> genero;
	switch(genero) {
		case 'm':
			pulsaciones = (210 - edad) / 10;
			cout << "El numero de puslsaciones es " << pulsaciones;
			break;
		case 'f':
			pulsaciones = (220 - edad) / 10;
			cout << "El numero de pulsaciones es " << pulsaciones;
			break;
		default:
			cout << "Error: Escriba en genero masculino o femenino (m/f).";
			break;
	}
	return 0;
}