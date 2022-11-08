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
	float area;
	float arista;
	float volumen;
	// Icosaedro
	// Variables
	// Proceso 
	cout << "Ingrese el valor de la arista" << endl;
	cin >> arista;
	if ((arista>0)) {
		volumen = (5/12)*(3+sqrtf(5))*pow(arista,3);
		area = 5*pow(arista,2)*sqrtf(3);
		cout << "El area del icosaedro es de: " << area << endl;
		cout << "El volumen del icosaedro es de: " << volumen << endl;
	} else {
		cout << "El valor que usted ingreso no es valido para el sistema" << endl;
	}
	cout << "Gracias por utilizar nuestros servicios" << endl;
	return 0;
}

