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
	float areabasemayor;
	float areabasemenor;
	float arealateral;
	float areatotal;
	float generatriz;
	int opciones;
	float pi;
	float radiomayor;
	float radiomenor;
	float volumen;
	// Tronco de cono
	// Varibles
	// Proceso 
	cout << "Que quiere calcular del tronco de cono" << endl;
	cout << "(1) Area Lateral" << endl;
	cout << "(2) Area Total" << endl;
	cout << "(3) El volumen " << endl;
	cin >> opciones;
	switch (opciones) {
	case 1:
		// Area lateral
		cout << "Ingrese la generatriz" << endl;
		cin >> generatriz;
		if ((generatriz>0)) {
			cout << "Ingrese radio mayor " << endl;
			cin >> radiomayor;
			cout << "Ingrese el radio menor" << endl;
			cin >> radiomenor;
			arealateral = M_PI*generatriz*(radiomayor+radiomenor);
			cout << "El area lateral del tronco de cono es de: " << arealateral << endl;
		} else {
			cout << "El valor que usted ingreso no es valido" << endl;
		}
		break;
	case 2:
		// Area total
		cout << "Ingrese el area lateral" << endl;
		cin >> arealateral;
		if ((arealateral>0)) {
			cout << "Ingrese el area base mayor" << endl;
			cin >> areabasemayor;
			cout << "Ingrese el area base menor" << endl;
			cin >> areabasemenor;
			areatotal = arealateral+areabasemayor+areabasemenor;
			cout << "El area total del tronco de cono es de: " << areatotal << endl;
		} else {
			cout << "El valor que usted ingreso no es valido" << endl;
		}
		break;
	case 3:
		// Volumen
		cout << "Ingrese el valor de la altura" << endl;
		cin >> altura;
		if ((altura>0)) {
			cout << "Ingrese el valor del radio mayor" << endl;
			cin >> radiomayor;
			cout << "Ingrese el valor del radio menor" << endl;
			cin >> radiomenor;
			volumen = (1/3)*M_PI*altura*((pow(radiomayor,2))+(pow(radiomenor,2))+(radiomayor*radiomenor));
			cout << "El volumen del tronco del cono es de: " << volumen << endl;
		}
		break;
	}
	cout << "Gracias por utilizar nustros servicios" << endl;
	return 0;
}

