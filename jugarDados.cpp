/* Nombre del archivo: jugarDados.cpp
Autor: Angel Palacio
Lugar: ITV
Instrurcciones: otro ejemlpo sobre numeros aleatorios
*/
#include<iostream>
#include<cstdlib> // c Standard Library
#include<ctime>

using namespace std;
int main(){
	
	srand(time(nullptr)); //Seed ramdom, semilla de inicio
	int aleatorio = rand() % 10;
	
	int valorMi = 1, valorMax = 6;
	
	//Fórmula para generar numeros dentro de un rango
short dado1 =	(rand()% (valorMax - valorMi + 1)) + valorMi ;
	
short dado2 =		(rand()% (valorMax - valorMi + 1)) + valorMi ;

cout<< dado1 <<" , " << dado2;
return 0;
	
}


