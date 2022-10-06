/*
Nombre del archivo: manipuladores.cpp
Autor: Angel palacio
Lugar: ITV
Instrucciones: Ejemplos de manipulacion E/S
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){

	cout << setw(20) << left << "Asignatura" << setw(10) <<"Estudiantes" <<endl;
	
	cout << setw(20) << left <<"Programacion" << setw(10) << right << "12" <<endl;
	
	cout << setw(20) << left <<"Estudiantes" << setw (10) << right << "9" << endl;
	cout << fixed << setprecision (10) << 12.34467;
	
	return 0;
}
