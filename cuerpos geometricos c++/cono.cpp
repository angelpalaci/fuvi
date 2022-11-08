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
	float generatriz;
	int opciones;
	float perimetrobase;
	float pi;
	float radio;
	float volumen;
	// Cono
	// Proceso 
	cout << "Que quiere calcular de un cono" << endl;
	cout << "(1) Area Lateral" << endl;
	cout << "(2) Area Total" << endl;
	cout << "(3) El volumen " << endl;
	cout << "(4) Generatriz" << endl;
	cin >> opciones;
	switch (opciones) {
	case 1:
		// Area lateral
		cout << "Ingrese perimetro base del cono si no presenta esta variable por favor colo que el numero 0" << endl;
		cin >> perimetrobase;
		if ((perimetrobase>0)) {
			cout << "Ingrese la generatriz" << endl;
			cin >> generatriz;
			arealateral = (perimetrobase*generatriz)/2;
			cout << "El area lateral del cono es de: " << arealateral << endl;
		} else {
			cout << "Ingese el radio del cono" << endl;
			cin >> radio;
			cout << "Ingrese la generatriz" << endl;
			cin >> generatriz;
			arealateral = M_PI*radio*generatriz;
			cout << "El area lateral del cono es de: " << arealateral << endl;
		}
		break;
	case 2:
		// Araea Total
		cout << "Ingese la area base del cono" << endl;
		cin >> areabase;
		if ((areabase>0)) {
			cout << "Ingrese el area lateral" << endl;
			cin >> arealateral;
			areatotal = arealateral+areabase;
			cout << "El area total del cono es de: " << areatotal << endl;
		} else {
			cout << "Ingrese el radio del cono" << endl;
			cin >> radio;
			cout << "Ingrese la generatriz " << endl;
			cin >> generatriz;
			areatotal = M_PI*radio*(generatriz+radio);
			cout << "El area total del cono es de: " << areatotal << endl;
		}
		break;
	case 3:
		// Volumen 
		cout << "Ingrese el area base del cono" << endl;
		cin >> areabase;
		if ((areabase>0)) {
			cout << "Ingrese la altura del cono" << endl;
			cin >> altura;
			volumen = (areabase*altura)/3;
			cout << "El volumen del cono es de: " << volumen << endl;
		} else {
			cout << "Ingrese el radio del cono" << endl;
			cin >> radio;
			cout << "Ingrese la altura del cono" << endl;
			cin >> altura;
			volumen = (M_PI*(pow(radio,2))*altura)/3;
			cout << "El volumen del cono es de: " << volumen << endl;
		}
		break;
	case 4:
		// generatriz
		cout << "Ingrese la altura del cono" << endl;
		cin >> altura;
		if ((altura>0)) {
			cout << "Ingrese el valor del radio" << endl;
			cin >> radio;
			generatriz = sqrtf((pow(altura,2))+(pow(radio,2)));
			cout << "La generatriz del cono es de: " << generatriz << endl;
		} else {
			cout << "El numero que usted ingreso no es valido" << endl;
		}
		break;
	}
	cout << "Gracias por utilizar nustros servicios" << endl;
	return 0;
}

