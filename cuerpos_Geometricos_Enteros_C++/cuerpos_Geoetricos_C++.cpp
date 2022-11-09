/*
Nombre: Cuerpos geometricos
Autor: Angel Palacio
cpnsiste en calculo de operaciones matematicas.
*/
#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;


int main() {
	float ab;
	float al;
	float altura;
	float alturacasqueteesferico;
	float alturazonaesferica;
	float ap;
	float apotemabase;
	float apotemapiramide;
	float area;
	float areabase;
	float areabasemayor;
	float areabasemenor;
	float arealateral;
	float areamayor;
	float areamenor;
	float areatotal;
	float arista;
	float artista;
	float at;
	int elegir;
	float generatriz;
	float h;
	float lados;
	float nl;
	int opcines;
	int opciones;
	float p;
	float pb;
	float perimetrobase;
	float perimetromayor;
	float perimetromenor;
	float pi;
	float radio;
	float radiomayor;
	float radiomenor;
	float readiomayor;
	float v;
	float volumen;
	// datos de entradad
	cout << "Bienvenido al algoritmo para calcular cuerpos geometricos." << endl;
	cout << "Aqui puede elegir con cual cuerpo geometrico desea calcular." << endl;
	cout << " " << endl;
	cout << (1) << "-Prisma" << endl;
	cout << (2) << "-Cilindro" << endl;
	cout << (3) << "-Piramide" << endl;
	cout << (4) << "-Cono" << endl;
	cout << (5) << "-Esfera" << endl;
	cout << (6) << "-Tronco de cono" << endl;
	cout << (7) << "-Piramide" << endl;
	cout << (8) << "-Tatraedro" << endl;
	cout << (9) << "-Hexaedro" << endl;
	cout << (10) << "-Octaedro" << endl;
	cout << (11) << "-Icosaedro" << endl;
	cin >> elegir;
    system("cls");
	switch (elegir) {
	case 1:
		// Prisma
		cout << "Que desea calcular de un prisma." << endl;
		cout << "(1) Area Lateral" << endl;
		cout << "(2) Area Total" << endl;
		cout << "(3) Volumen" << endl;
		cin >> opcines;
	    system("cls");
		switch (opcines) {
		case 1:
			// Area lateral
			cout << " Introduzca perimetro base" << endl;
			cout << "si no presenta esta variable por favor coloque el numero 0 " << endl;
			cin >> pb;
			if ((pb>0)) {
				cout << "Introduzca la altura" << endl;
				cin >> h;
				if (h>0) {
					al = pb*h;
					cout << " El area lateral del prisma es de:" << al << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Introduzca el numero de lados" << endl;
				cin >> nl;
				if ((nl>0)) {
					cout << "Introduzca la altura" << endl;
					cin >> h;
					if (h>0) {
						al = nl*h;
						cout << " El area lateral del prisma es de:" << al << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
			}
			break;
		case 2:
			// Area total
			cout << " Introduzca area lateral " << endl;
			cout << "si no presenta esta variable por favor coloque el numero 0 " << endl;
			cin >> al;
			if ((al>0)) {
				cout << "Introduzca el area base" << endl;
				cin >> ab;
				if (ab>0) {
					at = al*(2*ab);
					cout << " El area total del prisma es de:" << at << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Numero no valido por favor introduzca otro" << endl;
			}
			break;
		case 3:
			// Volumen
			cout << " Introduzca area base " << endl;
			cout << "si no presenta esta variable por favor coloque el numero 0 " << endl;
			cin >> ab;
			if ((ab>0)) {
				cout << "Introduzca la altura" << endl;
				cin >> h;
				if (h>0) {
					v = ab*h;
					cout << " El volumen del prisma es de:" << v << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Introduzca el perimetro" << endl;
				cin >> p;
				if ((p>0)) {
					cout << "Introduzca la apotema base" << endl;
					cin >> ap;
					if ((ap>0)) {
						cout << "Introduzca la altura" << endl;
						cin >> h;
						if (h>0) {
							v = ((p*ap)/2)*h;
							cout << " El volumen del prisma es de:" << v << endl;
						} else {
							cout << "Valor no valido" << endl;
						}
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
			}
			break;
		}
		break;
	case 2:
		// Cilindro
		// Variables
		// Proceso
		cout << "Que desea calcular de un cilindro" << endl;
		cout << "(1) Area Lateral" << endl;
		cout << "(2) Area Total" << endl;
		cout << "(3) Volumen" << endl;
		cin >> opcines;
		 system("cls");
		switch (opcines) {
		case 1:
			// Area lateral
			cout << "Introduzca el perimetro Base del cilindro " << endl;
			cout << "si no presenta esta variable por favor introduzca 0 " << endl;
			cin >> perimetrobase;
			if ((perimetrobase>0)) {
				cout << "Introduzca la altura" << endl;
				cin >> altura;
				if (altura>0) {
					arealateral = perimetrobase*altura;
					cout << " El area lateral del cilindro es de: " << arealateral << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Escriba el radio del cilindro" << endl;
				cin >> radio;
				if ((radio>0)) {
					cout << "Introduzca la altura" << endl;
					cin >> altura;
					if ((altura>0)) {
						arealateral = (2*M_PI*radio*altura);
						cout << " El area lateral del cilindro es de: " << arealateral << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
			}
			break;
		case 2:
			// area total
			cout << "Introduzca la area base del cilindro" << endl;
			cout << "si no presenta esta variable por favor introduzca 0 " << endl;
			cin >> areabase;
			if ((areabase>0)) {
				cout << " Ingrese el area lateral " << endl;
				cin >> arealateral;
				if ((arealateral>0)) {
					areatotal = arealateral+(2*areabase);
					cout << "El area total del cilindro es:" << areatotal << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Ingrese el radio del cilindro" << endl;
				cin >> radio;
				if ((radio>0)) {
					cout << "Ingrese la altura" << endl;
					cin >> altura;
					if ((altura>0)) {
						areatotal = (2*M_PI*radio)*(altura+radio);
						cout << "El area total del cilindro es:" << areatotal << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
			}
			break;
		case 3:
			// volumen
			cout << "Introduzca la area base del cilindro " << endl;
			cout << "si no presenta esta variable por favor introduzca 0 " << endl;
			cin >> areabase;
			if ((areabase>0)) {
				cout << " Ingrese la altura" << endl;
				cin >> altura;
				if ((altura>0)) {
					volumen = areabase*altura;
					cout << "El volumen del cilindro es de:" << volumen << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Ingrese el radio del cilindro" << endl;
				cin >> radio;
				if ((radio>0)) {
					cout << "Ingrese la altura" << endl;
					cin >> altura;
					if ((altura>0)) {
						volumen = (M_PI*pow(radio,2))*altura;
						cout << "El volumen del cilindro es de:" << volumen << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
			}
			break;
		}
		break;
	case 3:
		// Piramide
		// Variables 
		// Proceso
		cout << "Elija lo que desea calcular de una piramide." << endl;
		cout << "(1) Area Lateral" << endl;
		cout << "(2) Apotema Piramide" << endl;
		cout << "(3) Area Total" << endl;
		cout << "(4) Volumen" << endl;
		cin >> opcines;
	     system("cls");
		switch (opcines) {
		case 1:
			// Area lateral
			cout << "Ingrese el perimetro base de la piramide" << endl;
			cin >> perimetrobase;
			if ((perimetrobase>0)) {
				cout << "Introduzca la apotema de la piramide" << endl;
				cin >> apotemapiramide;
				if ((apotemapiramide>0)) {
					arealateral = (perimetrobase*apotemapiramide)/2;
					cout << "El area lateral de la piramide es de:" << arealateral << endl;
				} else {
					cout << "Valor introducido no valido" << endl;
				}
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
				if ((apotemabase>0)) {
					apotemapiramide = sqrtf((pow(altura,2))+(pow(apotemabase,2)));
					cout << "La apotema de la piramide es de:" << apotemapiramide << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
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
				if ((altura>0)) {
					volumen = (areabase*altura)/3;
					cout << "El volumen de la piramide es de: " << volumen << endl;
				} else {
					cout << "Valor no valido." << endl;
				}
			} else {
				cout << "El valor que usted ingreso n es valido ingrese otro" << endl;
			}
			break;
		}
		break;
	case 4:
		// Cono
		// Proceso 
		cout << "Que quiere calcular de un cono" << endl;
		cout << "(1) Area Lateral" << endl;
		cout << "(2) Area Total" << endl;
		cout << "(3) El volumen " << endl;
		cout << "(4) Generatriz" << endl;
		cin >> opciones;
	     system("cls");
		switch (opciones) {
		case 1:
			// Area lateral
			cout << "Ingrese perimetro base del cono " << endl;
			cout << " si no presenta esta variable por favor colo que el numero 0" << endl;
			cin >> perimetrobase;
			if ((perimetrobase>0)) {
				cout << "Ingrese la generatriz" << endl;
				cin >> generatriz;
				if ((generatriz>0)) {
					arealateral = (perimetrobase*generatriz)/2;
					cout << "El area lateral del cono es de: " << arealateral << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Ingese el radio del cono" << endl;
				cin >> radio;
				if ((radio>0)) {
					cout << "Ingrese la generatriz" << endl;
					cin >> generatriz;
					if ((generatriz>0)) {
						arealateral = M_PI*radio*generatriz;
						cout << "El area lateral del cono es de: " << arealateral << endl;
					} else {
						cout << "Valor ingresado no valido " << endl;
					}
				} else {
					cout << "Valor ingresado no valido" << endl;
				}
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
				if (radio>0) {
					cout << "Ingrese la generatriz " << endl;
					cin >> generatriz;
					if (generatriz>0) {
						areatotal = M_PI*radio*(generatriz+radio);
						cout << "El area total del cono es de: " << areatotal << endl;
					} else {
						cout << "Valor ingresado no valido" << endl;
					}
					cout << "Valor ingresado no valido" << endl;
				}
			}
			break;
		case 3:
			// Volumen 
			cout << "Ingrese el area base del cono" << endl;
			cout << "Si no presenta esta variable coloque un 0" << endl;
			cin >> areabase;
			if ((areabase>0)) {
				cout << "Ingrese la altura del cono" << endl;
				cin >> altura;
				if (altura>0) {
					volumen = (areabase*altura)/3;
					cout << "El volumen del cono es de: " << volumen << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Ingrese el radio del cono" << endl;
				cin >> radio;
				if (radio>0) {
					cout << "Ingrese la altura del cono" << endl;
					cin >> altura;
					if (altura>0) {
						volumen = (M_PI*(pow(radio,2))*altura)/3;
						cout << "El volumen del cono es de: " << volumen << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
			}
			break;
		case 4:
			// generatriz
			cout << "Ingrese la altura del cono" << endl;
			cin >> altura;
			if ((altura>0)) {
				cout << "Ingrese el valor del radio" << endl;
				cin >> radio;
				if (radio>0) {
					generatriz = sqrtf((pow(altura,2))+(pow(radio,2)));
					cout << "La generatriz del cono es de: " << generatriz << endl;
				} else {
					cout << "Valor ingresado no valido" << endl;
				}
			} else {
				cout << "El numero que usted ingreso no es valido" << endl;
			}
			break;
		}
		break;
	case 5:
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
		 system("cls");
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
			} else {
				cout << "Valor no valido" << endl;
			}
			break;
		case 3:
			// Zona esferica
			// area
			cout << "Zona esferica su perior" << endl;
			cout << "Ingrese el valor del radio mayor" << endl;
			cin >> radiomayor;
			if ((radio>0)) {
				cout << "Ingrese  la altura" << endl;
				cin >> alturazonaesferica;
				if (alturazonaesferica>0) {
					area = 2*M_PI*radiomayor*alturazonaesferica;
					cout << "El area de la zona esferica superior es de: " << area << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "El valor que usted ingreso no es aceptado" << endl;
			}
			break;
		case 4:
			// volumen
			cout << "Zona esferica su perior" << endl;
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
			cout << "Casquete esferico" << endl;
			cout << "Ingrese el valor del radio mayor" << endl;
			cin >> radiomayor;
			if ((radiomayor>0)) {
				cout << "Ingrese la altura" << endl;
				cin >> alturacasqueteesferico;
				if (alturacasqueteesferico>0) {
					area = 2*M_PI*radiomayor*alturacasqueteesferico;
					cout << "El area del casquete esferico es de: " << area << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "El valor que usted ingreso no es aceptado" << endl;
			}
			break;
		case 6:
			// volumen
			cout << "Casquete esferico" << endl;
			cout << "Ingrese el valor de la altura" << endl;
			cin >> alturacasqueteesferico;
			if ((alturacasqueteesferico>0)) {
				cout << "Ingrese el radio mayor" << endl;
				cin >> radiomayor;
				if (radiomayor>0) {
					volumen = ((M_PI*pow(alturacasqueteesferico,2))*(3*(radiomayor-alturacasqueteesferico)))/3;
					cout << "El volumen del casquete esferico es de: " << volumen << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "El valor que usted ingreso no es aceptado" << endl;
			}
			break;
		}
		break;
	case 6:
		// Tronco de cono
		// Varibles
		// Proceso 
		cout << "Que quiere calcular del tronco de cono" << endl;
		cout << "(1) Area Lateral" << endl;
		cout << "(2) Area Total" << endl;
		cout << "(3) El volumen " << endl;
		cin >> opciones;
	     system("cls");
		switch (opciones) {
		case 1:
			// Area lateral
			cout << "Ingrese la generatriz" << endl;
			cin >> generatriz;
			if ((generatriz>0)) {
				cout << "Ingrese radio mayor " << endl;
				cin >> radiomayor;
				if (radiomayor>0) {
					cout << "Ingrese el radio menor" << endl;
					cin >> radiomenor;
					arealateral = M_PI*generatriz*(radiomayor+radiomenor);
					cout << "El area lateral del tronco de cono es de: " << arealateral << endl;
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "El valor que usted ingreso no es valido" << endl;
			}
			break;
		case 2:
			// Area total
			cout << "Ingrese el area lateral" << endl;
			cin >> arealateral;
			if ((arealateral>=0)) {
				cout << "Ingrese el area base mayor" << endl;
				cin >> areabasemayor;
				if (areabasemayor>=0) {
					cout << "Ingrese el area base menor" << endl;
					cin >> areabasemenor;
					if (areabasemenor>=0) {
						areatotal = arealateral+areabasemayor+areabasemenor;
						cout << "El area total del tronco de cono es de: " << areatotal << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
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
				if (readiomayor>0) {
					cout << "Ingrese el valor del radio menor" << endl;
					cin >> radiomenor;
					if (radiomenor>0) {
						volumen = (1/3)*M_PI*altura*((pow(radiomayor,2))+(pow(radiomenor,2))+(radiomayor*radiomenor));
						cout << "El volumen del tronco del cono es de: " << volumen << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "Valor no valido" << endl;
			}
			break;
		}
		break;
	case 7:
		// Tronco de piramide
		// Varibles
		// Proceso 
		cout << "Que quiere calcular del tronco de una piramide" << endl;
		cout << "(1) Area Lateral" << endl;
		cout << "(2) Area Total" << endl;
		cout << "(3) El volumen " << endl;
		cin >> opciones;
		 system("cls");
		switch (opciones) {
		case 1:
			// Area lateral
			cout << "Ingrese el valor del perimetro de mayor base" << endl;
			cin >> perimetromayor;
			if ((perimetromayor>0)) {
				cout << "Ingrese el valor del perimetro de menor base" << endl;
				cin >> perimetromenor;
				if ((perimetromenor>0)) {
					cout << "Ingrese la apotema de la piramide" << endl;
					cin >> apotemapiramide;
					if ((apotemapiramide>0)) {
						arealateral = ((perimetromayor+perimetromenor)/2)*apotemapiramide;
						cout << "El area lateral del tronco de la piramide es de: " << arealateral << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
				} else {
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "El valor que usted ingreso es incorrecto" << endl;
			}
			break;
		case 2:
			// Area Total
			cout << "Ingrese el valor del area lateral" << endl;
			cin >> arealateral;
			if ((arealateral>=0)) {
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
				if (areamayor>0) {
					cout << "Ingrese el area base menor" << endl;
					cin >> areamenor;
					if (areamenor>0) {
						volumen = (1/3)*altura*((areamayor+areamenor)+sqrtf(areamayor*areamenor));
						cout << "El volumen del tronco de piramide es de: " << volumen << endl;
					} else {
						cout << "Valor no valido" << endl;
					}
					cout << "Valor no valido" << endl;
				}
			} else {
				cout << "El valor que usted ingreso es incorrecto" << endl;
			}
			break;
		}
		break;
	case 8:
		// Tetraedro
		// Variables
		// Proceso 
		// Area total y volumen
		cout << "Calculo de Tetraedro ingrese esta variable solamente" << endl;
		cout << "Ingrese la medida de la aristas" << endl;
		cin >> lados;
		if ((lados>0)) {
			areatotal = (pow(artista,2))*sqrtf(3);
			cout << "El area total del tetraedro es de: " << areatotal << endl;
			volumen = (sqrtf(2)/12)*pow(artista,3);
			cout << "El volumen del tetraedro es de: " << volumen << endl;
		} else {
			cout << "El valor que ingreso no es aceptado" << endl;
		}
		cout << "Gracias por utilizar nuestros cervicios" << endl;
		break;
	case 9:
		// hexaedro
		cout << "Calculo de Hexaedro ingrese esta variable" << endl;
		cout << "Ingrese el valor de la arista" << endl;
		cin >> arista;
		if ((arista>0)) {
			area = 6*(pow(arista,2));
			volumen = pow(arista,3);
			cout << "El area del hexaedro es de: " << area << endl;
			cout << "El volumen del hexaedro es de: " << volumen << endl;
		} else {
			cout << "El valor que usted ingreso no es valido para el sistma" << endl;
		}
		break;
	case 10:
		// Octaedro
		// Variables
		cout << "Calculo de Octaedro ingrese esta variable" << endl;
		cout << "Ingrese el valor de la arista" << endl;
		cin >> arista;
		if ((arista>0)) {
			area = 2*(pow(arista,2))*sqrtf(3);
			volumen = (sqrtf(2)/3)*pow(arista,3);
			cout << "El area del octaedro es de: " << area << endl;
			cout << "El volumen del octaedro es de: " << volumen << endl;
		} else {
			cout << "El valor que usted ingreso no es valido" << endl;
		}
		break;
	case 11:
		// Icosaedro
		// Variables
		// Proceso 
		cout << "Calculo de Icosaedro ingrese esta variable" << endl;
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
		break;
	}
	cout << "Gracias por utilizar nuestros servicios <3" << endl;
	return 0;
}

