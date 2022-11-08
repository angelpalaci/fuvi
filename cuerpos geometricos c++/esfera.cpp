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
	float alturacasqueteesferico;
	float alturazonaesferica;
	float area;
	int opciones;
	float pi;
	float radio;
	float radiomayor;
	float volumen;
	// Esfera
	// Variables 
	// Proceso
	cout << "Que es lo que le gustaria calcualar de una esfera " << endl;
	cout << "Esfera" << endl;
	cout << "(1) Area" << endl;
	cout << "(2) Volumen" << endl;
	cout << "Zona esferica superior" << endl;
	cout << "(3) Area" << endl;
	cout << "(4) Volumen" << endl;
	cout << "Casquete esferico inferior" << endl;
	cout << "(5) Area" << endl;
	cout << "(6) Volumen" << endl;
	cin >> opciones;
	switch (opciones) {
	case 1:
		// Esfera 
		// Area
		cout << "Ingrese el radio de la esfera" << endl;
		cin >> radio;
		if ((radio>0)) {
			area = 4*M_PI*(pow(radio,2));
			cout << "El area de la esfera es de: " << area << endl;
		} else {
			cout << "El valor que usted ingreso no es aceptado" << endl;
		}
		break;
	case 2:
		// volumen
		cout << "Ingrese el radio de la esfera" << endl;
		if ((radio>0)) {
			volumen = (4/3)*M_PI*pow(radio,3);
			cout << "El volumen de la esfera es de: " << volumen << endl;
		}
		break;
	case 3:
		// Zona esferica
		// area
		cout << "Ingrese el valor del radio mayor" << endl;
		cin >> radiomayor;
		if ((radio>0)) {
			cout << "Ingrese  la altura" << endl;
			cin >> alturazonaesferica;
			area = 2*M_PI*radiomayor*alturazonaesferica;
			cout << "El area de la zona esferica superior es de: " << area << endl;
		} else {
			cout << "El valor que usted ingreso no es aceptado" << endl;
		}
		break;
	case 4:
		// volumen
		cout << "Ingrese el valor de la altura" << endl;
		cin >> alturazonaesferica;
		if ((alturazonaesferica>0)) {
			cout << "Ingrese el valor del radio menor" << endl;
			cin >> radio;
			volumen = (M_PI*alturazonaesferica*((pow(alturazonaesferica,2)))+(3*(pow(radio,3)))+(3*(pow(radio,2))))/6;
			cout << "El volumen de la zona inferior esferica es de: " << volumen << endl;
		} else {
			cout << "El valor que usted ingreso no es aceptado" << endl;
		}
		break;
	case 5:
		// Casquete esferico
		// Area
		cout << "Ingrese el valor del radio mayor" << endl;
		cin >> radiomayor;
		if ((radiomayor>0)) {
			cout << "Ingrese la altura" << endl;
			cin >> alturacasqueteesferico;
			area = 2*M_PI*radiomayor*alturacasqueteesferico;
			cout << "El area del casquete esferico es de: " << area << endl;
		} else {
			cout << "El valor que usted ingreso no es aceptado" << endl;
		}
		break;
	case 6:
		// volumen
		cout << "Ingrese el valor de la altura" << endl;
		cin >> alturacasqueteesferico;
		if ((alturacasqueteesferico>0)) {
			cout << "Ingrese el radio mayor" << endl;
			cin >> radiomayor;
			volumen = ((M_PI*pow(alturacasqueteesferico,2))*(3*(radiomayor-alturacasqueteesferico)))/3;
			cout << "El volumen del casquete esferico es de: " << volumen << endl;
		} else {
			cout << "El valor que usted ingreso no es aceptado" << endl;
		}
		break;
	}
	cout << "Gracias por utilizar nustros servicios" << endl;
	return 0;
}

