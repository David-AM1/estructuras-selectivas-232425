#include <iostream>
using namespace std;

int main () {
	double n_camisas, monto_total;
	cout <<"Ingrese la cantidad de camisas: ";
	cin >> n_camisas;
	cout <<"Ingrese el costo de su compra: ";
	cin >> monto_total;
	if (n_camisas >= 3) {
		monto_total = monto_total * 0.8;
		cout <<"Recibio un 20% de descuento, ahora pagara " << monto_total << endl;
	} else {
		monto_total = monto_total *0.9;
		cout << "Recibio un 10 % de decuento, ahora pagara " << monto_total << endl;
		cout << "Recibio un 10 % de decuento, ahora pagara ";
	}
}