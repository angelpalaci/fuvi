/*
Nombre del archivo: Funciones2.cpp
Autor: Angel
Lugar: ITV
Instrucciones: Mas ejemplos de funciones
*/
#include<iostream>

using namespace std;
// 1- prototipo de funciones
double sumarNumeros(double a, double b);
int main (){
	
	//3 llamadas o invocaciones de funciones 
	double /*suma,*/  a = 15.0, b = 8.5;
	
    //suma = sumarNumeros (a,b);
	cout << "La suma de " << a << " + " << b << " es " << sumarNumeros(a,b);
	
	
	return 0; 
}
//2- definicion de las funciones
double sumarNumeros(double a, double b){
//	double resultado;
//	resultado = a + b; 
//	return resultado; 
return a  + b; 
}





