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
	int num;
	
	cout << aleatorio;
	cout<< "Adivine un numero entre 0 y 10"<< endl;
	cin >> num;
	
	
	while ( num == aleatorio){
	
	cout << "Adivine un numero entre 0 y 10"
	cin >> num;
		
} 
	cout << "Felicidades, acertaste. " << endl;
	return 0;
	}