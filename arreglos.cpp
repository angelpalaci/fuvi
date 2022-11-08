/*
Nombre del archivo: arreglos.cpp
Autor: Angel
Lugar: ITV
Instrucciones: Ejemplos con arreglos
*/

#include<iostream>

using namespace std;

int main(){
	
	double cant;
	//tipo de dato nombre arreglo [tamaño, dimension]
	cout << "Ingrese la cantidad de datos" << endl;
	cin >> cant;
	
	double promedioNotas[10];
	
    //promedioNotas[0] = 15.2 << endl;
    //promedioNotas[1] = 55.8 << endl;
	
	cout <<"Ingrese los datos" << endl;
	
	for(int i = 0; i < 10; i++){
		
		cout <<"Elementos [" << i << "] = " << promedioNotas[i] << endl;
	
	}
	
	
	cout << promedioNotas[0] << endl;
	cout << promedioNotas[1] << endl;
	
	return 0;
}