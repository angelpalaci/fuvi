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
	cout << left;
	cout << setw(20) << "Artista" << setw(10) <<"Album" <<endl
	<< setw(20) <<"Michael Jackon" << setw(10) << "Thriller" << endl;
	
	cout << fixed << setprecision (10) << 12.34467;
	
	return 0;
}
