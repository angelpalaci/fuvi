/*
Nombre del archivo: semaforo
Autor: Angel palacio
Lugar: ITV
Instrucciones: mas ejemplos de estructura condicionales if
*/

#include<iostream>
using namespace std;

int main(){
	int edad;
	char color;
	cout << "Ingrese su edad";
	cin >> edad;
	
	
	if ( edad < 17 || edad > 70){
		cout << "Ud no tiene la edad suficiente para conducir un vehiculo." <<endl;
		
		
	    }else{
		
		cout <<"Color del semaforo:( r= Rojo, a=Amarillo, v=Verde)"<< endl;
		cin >> color;
		
		if (color == 'r') {
		
			cout << "Baje la velocidad hasta detenerse suavemente." << endl;
			
		}else if ( color == 'v') {
			
			cout << "Siga adelante." << endl;
			
		}else if ( color == 'a'){
			cout << "Tenga precausion en avanzar." << endl;
		}else {
			
			cout << "color incorrecto o no valido" << endl;
		}
			
		
	}
	
}