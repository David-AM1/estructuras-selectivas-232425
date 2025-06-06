#include <iostream>
using namespace std;

int main() {
	double compra;
	cout<<"Ingrese el monto de su compra: ";
	cin>>compra;
	if(compra>1000){
		compra=compra*0.8;
		cout<<"Usted recibio un descuento del 20% ahora solo pagara "<<compra;
	}else{
		cout<<"Usted no recibio ningun descuento, su pago seguira siendo "<<compra;
		cout<<"ACTU";
	}
	return 0;
}