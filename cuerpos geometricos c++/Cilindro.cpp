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
	float areabase;
	float arealateral;
	float areatotal;
	int opcines;
	float perimetrobase;
	float pi;
	float radio;
	float volumen;
	// Cilindro
	// Variables
	// Proceso 
	cout << "(1) Area Lateral" << endl;
	cout << "(2) Area Total" << endl;
	cout << "(3) Volumen" << endl;
	cin >> opcines;
	switch (opcines) {
	case 1:
		// Area lateral
		cout << "Introduzca el perimetro Base del cilindro si no presenta esta variable por favor introduzca 0 " << endl;
		cin >> perimetrobase;
		if ((perimetrobase>0)) {
			cout << "Introduzca la altura" << endl;
			cin >> altura;
			arealateral = perimetrobase*altura;
			cout << " El area lateral del cilindro es de: " << arealateral << endl;
		} else {
			cout << "Escriba el radio del cilindro" << endl;
			cin >> radio;
			cout << "Introduzca la altura" << endl;
			cin >> altura;
			arealateral = (2*M_PI*radio*altura);
			cout << " El area lateral del cilindro es de: " << arealateral << endl;
		}
		break;
	case 2:
		// area total
		cout << "Introduzca la area base del cilindro si no presenta esta variable por favor introduzca 0 " << endl;
		cin >> areabase;
		if ((areabase>0)) {
			cout << " Ingrese el area lateral " << endl;
			cin >> arealateral;
			areatotal = arealateral+(2*areabase);
			cout << "El area total del cilindro es:" << areatotal << endl;
		} else {
			cout << "Ingrese el radio del cilindro" << endl;
			cin >> radio;
			cout << "Ingrese la altura" << endl;
			cin >> altura;
			areatotal = (2*M_PI*radio)*(altura+radio);
			cout << "El area total del cilindro es:" << areatotal << endl;
		}
		break;
	case 3:
		// volumen
		cout << "Introduzca la area base del cilindro si no presenta esta variable por favor introduzca 0 " << endl;
		cin >> areabase;
		if ((areabase>0)) {
			cout << " Ingrese la altura" << endl;
			cin >> altura;
			volumen = areabase*altura;
			cout << "El volumen del cilindro es de:" << volumen << endl;
		} else {
			cout << "Ingrese el radio del cilindro" << endl;
			cin >> radio;
			cout << "Ingrese la altura" << endl;
			cin >> altura;
			volumen = (M_PI*pow(radio,2))*altura;
			cout << "El volumen del cilindro es de:" << volumen << endl;
		}
		break;
	}
	cout << "Gracias por usar nuestros servicios" << endl;
	return 0;
}

