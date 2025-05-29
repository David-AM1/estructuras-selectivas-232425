#include <iostream>
using namespace std;

int main() {
	double nota1, nota2, nota3, promedio;
	cout <<"Ingrese la primera calificacion: ";
	cin >> nota1;
	cout << "Ingrese la segunda calificacion: ";
	cin >> nota2;
	cout << "Ingrese la tercera calificacion: ";
	cin >> nota3;
	promedio = (nota1+nota2+nota3)/3;
	if (promedio >= 70) {
		cout <<"Su promedio es " << promedio << " esta " << "APROBADO";
	} else {
		cout <<"Su promedio es " << promedio << " esta " << "REPROBADO";
	}
	return 0;
}