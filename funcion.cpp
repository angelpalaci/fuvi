/*
Nombre del archivo: Funciones.cpp
Autor: Angel
Lugar: ITV
Instrucciones: Introduccion a las funciones en c++
*/
#include<iostream>

using namespace std;
// 1- prototipos de funcion 
void saludar (); //prototipo de funcion que no responda algun valor ni requiere datos de entrada
void otroSaludo(string nombre);//prototipo de funcion que no responda algun valor pero  requiere datos de entrada

int main (){
	// 3- llamada o innovacion la(s) funciones
	string nombre;
	//saludar();
	cout << "ingrese su nombre: ";
	cin >>nombre;
	
	otroSaludo(nombre);
	
	
	
	
	return 0;
}
//2- definicion de funciones 

void saludar(){
	cout << "Bienvenidos a esta APP, desde la funcion saludar()";
}

void otroSaludo (string nombre){
	
	cout << "Bienvenido a esta APP. " << nombre << endl;
	saludar();
}






