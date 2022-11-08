/*
Nombre del archivo: estructurafor.cpp
Autor: EL Chato.
Lugar: ITV
Instrucciones: Ejemplo de la estructura for.
*/
#include<iostream>

using namespace std;
int main (){
	int tabla;
    cout << "Cual tabla de multiplicar desea mostrar: "<< endl;
    cin >> tabla;
	
	 for(int i = 1 ; i < 11; i++){
	 cout << tabla << " X " <<  i << " = "<< tabla * i <<endl;
 	}
	
	return 0;
}