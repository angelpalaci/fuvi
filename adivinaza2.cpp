/*
nombre del archivo: adivinanza.cpp
Auntor: Ange
Lugar: ITV
Instrucciones: Juego de adivinanza de un numero
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

	srand (time(nullptr));
	int aleatorio = rand() % 10;
	int num, intento = 1;
	
	do{
		cout << "Ingrese un numero entre 0 y 10" << endl;
		cin >> num;
		if (num == aleatorio){
			cout << "Felicidades acertaste." << endl;
			intento = 4;
			
		} else {
			cout << "Numero incorrecto"<< endl;
			if ( intento == 3 ){
				cout << "ud ha agotado todos sus intentos"<< endl;
			}
			intento ++;
			
		}
		}while(intento < 4);
		
	
	cout << "El numero ganador era: "<< aleatorio <<endl;
	cout <<"Fin de la apliaccion";
	return 0;
	
}