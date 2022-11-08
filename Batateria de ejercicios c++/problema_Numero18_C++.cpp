/*
Nombre del archivo:
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int ano;

	int dia;
	float m;
	int mes;
	string nombremes;
	cout << "Averigue la fecha " << endl;
	cout << "Ingrese el dia" << endl;
	cin >> dia;
	cout << "Ingrese el mes" << endl;
	cin >> mes;
	cout << "Ingrese el año" << endl;
	cin >> ano;
	if (dia<1 || dia>31) {
		do {
			cout << "Dia fuera de rango" << endl;
			cout << "Ingrese un dia" << endl;
			cin >> dia;
		} while (!(dia>0 && dia>32));
	}
	if (m<1 || m>12) {
		do {
			cout << "Mes fuera de rango" << endl;
			cout << "Ingrese un mes" << endl;
			cin >> mes;
		} while (!(mes>0 && mes<13));
	}
	if (ano>1) {
		do {
			cout << "Año fuera de rango" << endl;
			cout << "Ingrese un ano" << endl;
			cin >> ano;
		} while (ano<=0);
	}
	switch (mes) {
	case 1:
		nombremes = "Enero";
		break;
	case 2:
		nombremes = "Febrero";
		break;
	case 3:
		nombremes = "Marzo";
		break;
	case 4:
		nombremes = "Abril";
		break;
	case 5:
		nombremes = "Mayo ";
		break;
	case 6:
		nombremes = "Juni ";
		break;
	case 7:
		nombremes = "Julio";
		break;
	case 8:
		nombremes = "Agosto";
		break;
	case 9:
		nombremes = "Septiembre";
		break;
	case 10:
		nombremes = "Octubre";
		break;
	case 11:
		nombremes = "Noviembre";
		break;
	case 12:
		nombremes = "Diciembre";
		break;
	}
	cout << dia << " de " << nombremes << " del " << ano << endl;
	return 0;
}

