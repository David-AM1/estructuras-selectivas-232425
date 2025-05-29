#include <iostream>
using namespace std;

int main () {
	double promedio, pension;
	cout << "Ingrese su promedio: ";
	cin >> promedio;
	cout << "Ingrese el monto de su pension: ";
	cin >> pension;
	if (promedio >= 18) {
		pension = pension * 0.7;
		cout << "Recibio un 30% de descuento, ahora pagara " << pension;
	} else {
		pension= pension*1.18;
		cout << "No recibio ningun descuento, pagara " << pension<<" (incluido el IGV)";
	}
	return 0;
}