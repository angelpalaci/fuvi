/*
Nombre del archivo: conversion de grados celcios y grados faradios
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	float a;
	float b;
	float c;
	float d;
	float f;
	float opciones;
	cout << "Que conversion desea llevar acabo" << endl;
	cout << "De celcios a faradios presione 1" << endl;
	cout << "De faradios a celcios presione 2" << endl;
	cin >> opciones;
	if ((opciones==1)) {
		cout << "Ingrese los celcios" << endl;
		cin >> b;
		f = (b*1.8)+32;
		cout << "El valor en faradios es de " << f << "Faradios" << endl;
	} else {
		cout << "El valor que usted ingreso no es valido" << endl;
	}
	if ((opciones==2)) {
		cout << "Ingrese el valor de los Faradios" << endl;
		cin >> f;
		c = (f-32)/1.8;
		cout << "El valor es de " << c << "°" << endl;
	} else {
		cout << "El valor que usted ingreso no es valido" << endl;
	}
	return 0;
}

