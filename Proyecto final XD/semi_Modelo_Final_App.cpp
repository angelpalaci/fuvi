/*
Nombre del archivo: Transformador a notacion ingeniera
Autor: Angel Palacio
Lugar: ITV
consiste: Realizar una conversion a notacion cientifica.
*/

#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<string>
using namespace std;


int main() {
	string medida;
	string  nombre;
	float num1;
	int opciones;
	float total;
	int magia;
	// variables
	// datos de entrada
	cout << "Conversion de unidades a notacion ingeniera" << endl;
	cout << "Ingrese su nombre " << endl;
	getline(cin,nombre);
	system("cls");
	
	cout << "Bienvenido," << nombre << endl;
	cout << "Ingrese la unidad de medida con la que esta trabajando por favor," << nombre << endl;
	cin >> medida;
	
	do {
		cout << "Elija a cual medida quiere tranformar" << endl;
		cout << "Opciones solamente de forma numerica" << endl;
		cout << (1) << " Exa " << endl;
		cout << (2) << " Peta " << endl;
		cout << (3) << " tera  " << endl;
		cout << (4) << " Giga = G " << endl;
		cout << (5) << " Mega = M " << endl;
		cout << (6) << " kilo = K " << endl;
		cout << (7) << " mili = m " << endl;
		cout << (8) << " micro = micro " << endl;
		cout << (9) << " nano " << endl;
		cout << (10) << " pico " << endl;
		cout << (11) << " femto  " << endl;
		cout << (12) << " atto " << endl;
		cout << (13) << " Salir" << endl;
		cin >> opciones;
		system("cls");
		// sintaxis y datos de salida
		switch (opciones) {
		case 1:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			if ((num1>=1000000000000)) {
				total = num1/(pow(10,18));
				cout << "La conversion es de: " << total <<"E "<<medida << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
				
			} else {
				cout << "El numero ingresado no es valido," << nombre << endl;
				cout << "Por ser menor a la cifra necesaria para la coversion." << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			}
			break;
		case 2:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			if ((num1>=10000000)) {
				total = num1/(pow(10,15));
				cout << "La conversion es de: " << total << "P " << medida << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			} else {
				cout << "El numero ingresado no es valido," << nombre << endl;
				cout << "Por ser menor a la cifra necesaria para la coversion." << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			}
			break;
		case 3:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			if ((num1>=100000000)) {
				total = num1/(pow(10,12));
				cout << "La conversion es de:" << total << "T " << medida << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			} else {
				cout << "El numero ingresado no es valido," << nombre << endl;
				cout << "Por ser menor a la cifra necesaria para la coversion." << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			}
			break;
		case 4:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			total = num1/(pow(10,9));
			cout << "La conversion es de: " << total << "G " << medida << endl;
			cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
			system("cls");
			break;
		case 5:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			total = num1/(pow(10,6));
			cout << "La conversion es de:" << total << "M " << medida << endl;
			cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
			system("cls");
			break;
		case 6:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			total = num1/(pow(10,3));
			cout << "La conversion es de:" << total << "K " << medida << endl;
			cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
			system("cls");
			break;
		case 7:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			total = num1*(pow(10,(-3)));
			cout << "La conversion es de:" << total << "m " << medida << endl;
			cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
			system("cls");
			break;
		case 8:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			total = num1*(pow(10,(-6)));
			cout << "La conversion es de:" << total << "micro " << medida << endl;
			cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
			system("cls");
			break;
		case 9:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			if ((num1>=1000000000)) {
				total = num1*(pow(10,(-9)));
				cout << "La conversion es de:" << total << " " << medida << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			} else {
				cout << "El numero ingresado no es valido," << nombre << endl;
				cout << "Por ser menor a la cifra necesaria para la coversion." << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			}
			break;
		case 10:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			if ((num1>=1000000000000)) {
				total = num1*(pow(10,(-12)));
				cout << "La conversion es de:" << total << " " << medida << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			} else {
				cout << "El numero ingresado no es valido," << nombre << endl;
				cout << "Por ser menor a la cifra necesaria para la coversion." << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			}
			break;
		case 11:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			if ((num1>=1000000000000)) {
				total = num1*(pow(10,(-15)));
				cout << "La conversion es de:" << total << " " << medida << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			} else {
				cout << "El numero ingresado no es valido," << nombre << endl;
				cout << "Por ser menor a la cifra necesaria para la coversion." << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
			}
			break;
		case 12:
			cout << "Ingrese la cantidad" << endl;
			cin >> num1;
			if ((num1>=1000000000000)) {
				total = num1*(pow(10,(-18)));
				cout << "La conversion es de:" << total <<  " " << medida << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
		}else {
			cout << "El numero ingresado no es valido," << nombre << endl;
				cout << "Por ser menor a la cifra necesaria para la coversion." << endl;
				cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
				system("cls");
		}
			
			break;
		case 13:
			cout << "Usted ha salido" << endl;
			
			break;
		default:
			cout << "No es opcion valida";
			cout << "Ingrese 1 para continuar"<< endl;
				cin >> magia;
			system("cls");
			
		}
	
		
	} while (opciones!=13);
	
	
	cout << "GRACIAS POR UTILIZAR NUESTRA APLICACION <3 " << nombre << endl;
	return 0;
}

