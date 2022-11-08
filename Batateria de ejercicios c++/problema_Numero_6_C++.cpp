/*
Nombre del archivo: Porciento de estudiantes
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;



int main() {
	float ninas;
	float ninos;
	float porcentajeninas;
	float porcentajeninos;

	float total;
	// Definir variables
	cout <<"Calcule el porcentaje de alumnos de el colegio" << endl;
	cout << " " << endl;
	cout << "Ingrese el numero de ninas de la escuela" << endl;
	cin >> ninas;
	cout << "Ingrese el numero de ninos de la escuela" << endl;
	cin >> ninos;
	if ((ninas>=0)) {
		if ((ninos>=0)) {
			total = ninas+ninos;
			porcentajeninas = (ninas*100)/total;
			porcentajeninos = (ninos*100)/total;
			cout << "El porcentaje de las ninas es de: " << porcentajeninas <<"%"<< endl;
			cout << "El porcentaje de los ninos es de: " << porcentajeninos <<"%"<< endl;
		} else {
			cout << "El valor de los niños no es valido " << endl;
		}
	} else {
		cout << "El valor de niñas no es valido" << endl;
	}
	cout << "Gracias por utilizar nuestros servicios" << endl;
	return 0;
}

