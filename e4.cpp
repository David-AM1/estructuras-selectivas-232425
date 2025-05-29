#include <iostream>
using namespace std;

int main () {
	int num_azar;
	double compra;
		cout << "Ingrese el monto de su compra: ";
		cin >> compra;
		cout << "Ingrese un numero al azar: ";
		cin >> num_azar;
		if (num_azar >= 74 ) {
			compra = compra * 0.8;
			cout << "Recibio un 20% de descuento, ahora pagara " << compra;
		} else {
			compra = compra * 0.85;
			cout << "Recibio un 15% de descuento, ahora pagara " << compra;
		}
		return 0;
}