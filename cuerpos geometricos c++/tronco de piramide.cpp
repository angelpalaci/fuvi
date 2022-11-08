// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float altura;
	float apotemapiramide;
	float arealateral;
	float areamayor;
	float areamenor;
	float areatotal;
	int opciones;
	float perimetromayor;
	float perimetromenor;
	float volumen;
	// Tronco de piramide
	// Varibles
	// Proceso 
	cout << "Que quiere calcular del tronco de una piramide" << endl;
	cout << "(1) Area Lateral" << endl;
	cout << "(2) Area Total" << endl;
	cout << "(3) El volumen " << endl;
	cin >> opciones;
	switch (opciones) {
	case 1:
		// Area lateral
		cout << "Ingrese el valor del perimetro de mayor base" << endl;
		cin >> perimetromayor;
		if ((perimetromayor>0)) {
			cout << "Ingrese el valor del perimetro de menor base" << endl;
			cin >> perimetromenor;
			cout << "Ingrese la apotema de la piramide" << endl;
			cin >> apotemapiramide;
			arealateral = ((perimetromayor+perimetromenor)/2)*apotemapiramide;
			cout << "El area lateral del tronco de la piramide es de: " << arealateral << endl;
		} else {
			cout << "El valor que usted ingreso es incorrecto" << endl;
		}
		break;
	case 2:
		// Area Total
		cout << "Ingrese el valor del area lateral" << endl;
		cin >> arealateral;
		if ((arealateral>0)) {
			cout << "Ingrese el area base mayor" << endl;
			cin >> areamayor;
			cout << "Ingrese el area base menor" << endl;
			cin >> areamenor;
			areatotal = arealateral+areamayor+areamenor;
			cout << "El area total del tronco de piramide es de: " << areatotal << endl;
		} else {
			cout << "El valor que usted ingreso es incorrecto" << endl;
		}
		break;
	case 3:
		// Volumen.
		cout << "Ingrese el valor de la altura" << endl;
		cin >> altura;
		if ((altura>0)) {
			cout << "Ingrese el area base mayor" << endl;
			cin >> areamayor;
			cout << "Ingrese el area base menor" << endl;
			cin >> areamenor;
			volumen = (1/3)*altura*((areamayor+areamenor)+sqrtf(areamayor*areamenor));
			cout << "El volumen del tronco de piramide es de: " << volumen << endl;
		} else {
			cout << "El valor que usted ingreso es incorrecto" << endl;
		}
		break;
	}
	cout << "Gracias por utilizar nustros servicios" << endl;
	return 0;
}

