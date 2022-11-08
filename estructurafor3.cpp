/*
Nombre del archivo: estructurafor2.cpp
Autor: EL Chato.
Lugar: ITV
Instrucciones: Ejemplo de la estructura for.
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int aleatorio, contpar = 0 , conimpar = 0;
	int num;
	cout << " Cantidad de numeros : ";
	cin >> num;
	srand(time(nullptr));
	for(int i= 1; i <= num ; i++){
	 	    
	 	    aleatorio = rand() % 100;
	 	    cout << aleatorio << " ";
	 	    if ( aleatorio % 2 == 0){
	 	    	contpar ++;
			 }else{
			 	conimpar ++;
			 	
			 }
	    		
		} 
		cout << " " << endl;
	cout << "\nLa cantidad de numeros pares es: " << contpar << endl;
		cout << "\nLa cantidad de numeros Impares es: " << conimpar << endl;
	cout << "Fin del programa";
	return 0;
}