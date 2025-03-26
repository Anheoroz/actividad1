#include <iostream>
using namespace std;

int main() {

	float monto, conver;
	int op;

cout << "Selecciona tu Conversion segun tu moneda:\n" ;
cout << "1. Dolares a Euros\n";
cout << "2. Dolares a Quetzales\n";
cout << "3. Quetzales a Dolares\n";
cout << "4. Quetzales a Euros\n";
cout << "5. Euros a dolares\n";
cout << "6. Euros a Quetzales\n";
cout << "Ingrese opcion: ";
cin >> op;

cout << "Introduce el monto a convertir: " ;
cin >> monto;

switch(op) {

case 1:
	conver = monto * 0.92;
cout << monto << " dolares equivalen a " << conver << " Euros." << endl;
break;

case 2:
	conver = monto * 7.70;
cout << monto << " dolares equivalen a " << conver << " Quetzales." << endl;
break;

case 3:
	conver = monto / 7.70;
cout << monto << " Quetzales equivalen a " << conver << " Dolares." << endl;
break;

case 4:
	conver = monto * 0.12;
cout << monto << " Quetzales equivalen a " << conver << " Euros." << endl;
break;

case 5:
	conver = monto * 1.09;
cout << monto << " Euros equivalen a " << conver << " Dolares." << endl;
break;

case 6:
	conver = monto * 8.41;
cout << monto << " Euros equivalen a " << conver << " Quetzales." << endl;
break;

default:
cout << "Valor no valido" << endl;
break;
}
return 0;
}
