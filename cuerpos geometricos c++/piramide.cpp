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
	float apotemabase;
	float apotemapiramide;
	float areabase;
	float arealateral;
	float areatotal;
	int opcines;
	float perimetrobase;
	float volumen;
	// Piramide
	// Variables 
	// Proceso
	cout << "(1) Area Lateral" << endl;
	cout << " (2) Apotema Piramide" << endl;
	cout << "(3) Area Total" << endl;
	cout << "(4) Volumen" << endl;
	cin >> opcines;
	switch (opcines) {
	case 1:
		// Area lateral
		cout << "Ingrese el perimetro base de la piramide" << endl;
		cin >> perimetrobase;
		if ((perimetrobase>0)) {
			cout << "Introduzca la apotema de la piramide" << endl;
			cin >> apotemapiramide;
			arealateral = (perimetrobase*apotemapiramide)/2;
			cout << "El area lateral de la piramide es de:" << arealateral << endl;
		} else {
			cout << "El valor que introdujo no es valido" << endl;
		}
		break;
	case 2:
		// apotema piramide
		cout << "Ingrese la altura de la piramide" << endl;
		cin >> altura;
		if ((altura>0)) {
			cout << "Ingrese la apotema base" << endl;
			cin >> apotemabase;
			apotemapiramide = sqrtf((pow(altura,2))+(pow(apotemabase,2)));
			cout << "La apotema de la piramide es de:" << apotemapiramide << endl;
		} else {
			cout << "El valor que introdujo no es valido ingrese otro" << endl;
		}
		break;
	case 3:
		// Area Total
		cout << "Ingrese el area Lateral de la piramide" << endl;
		cin >> arealateral;
		if ((arealateral>0)) {
			cout << "Ingrese el area base" << endl;
			cin >> areabase;
			areatotal = arealateral+areabase;
			cout << "El area Total de la piramide es de:" << areatotal << endl;
		} else {
			cout << "El valor que usted ingreso n es valido ingrese otro" << endl;
		}
		break;
	case 4:
		// volumen
		cout << "Ingrese el valor del area base de la piramide rectangular" << endl;
		cin >> areabase;
		if ((areabase>0)) {
			cout << "Ingrese el valor de la altura" << endl;
			cin >> altura;
			volumen = (areabase*altura)/3;
		} else {
			cout << "El valor que usted ingreso n es valido ingrese otro" << endl;
		}
		break;
	}
	cout << "Gracias por utilizar nuestros servicios" << endl;
	return 0;
}

