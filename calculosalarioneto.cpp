/*
Nombre del archivo: calculosalarioneto.cpp
Autor: Angel palacio
Lugar: ITV
Instrucciones: Ejemplo programacion con estructura
*/

#include<iostream>

using namespace std;
//Variable globales
const double TASA_ANTIGUEDAD = 15 ;
const double TASA_SINDICATO = 1;
const double TASA_INSS = 7;
const double TASA_IR = 15.6 ;
const double TASA_INSS_PATRONAL = 22.5;
int main(){
	//VARIABLES LOCALES A MAIN
	double salarioBasico, ingresoNeto, ingresoTotal, deduccionesTotales;
	double montoSindicato, montoINSS, montoIR, montoINSSPatronal, montoAntiguedad;
	string nombre;
	//pedir datos de usuario
	cout << "Ingrese su nombre ";
	cin >> nombre;
	cout <<" Hola " << nombre << ", ingrese su salario básico: C$";
	cin >> salarioBasico;
	
	//calcular los ingresos
	montoAntiguedad = salarioBasico *(TASA_ANTIGUEDAD / 100);
	ingresoTotal = salarioBasico + montoAntiguedad;
	//calcular deducciones
	montoSindicato = salarioBasico * (TASA_SINDICATO / 100);
	montoINSS = ingresoTotal * (TASA_INSS /100);
	montoIR = ingresoTotal * (TASA_IR /100);
	deduccionesTotales = montoSindicato + montoINSS + montoIR;
	//calcular las deducciones
	montoINSSPatronal = ingresoTotal * (TASA_INSS_PATRONAL / 100);
	//Calcular ingreso neto
	ingresoNeto = ingresoTotal - deduccionesTotales;
	//mostrar resultados
	cout <<" Este es su resultado " << nombre << endl;
	cout << " Salario bruto o básico = C$ " <<salarioBasico << endl;
	cout << "Ingresos totales " <<endl;
	cout << " Monto por antiguedad =C$" << montoAntiguedad << endl;
	cout << "Monto de ingresos totales =C$" << ingresoTotal << endl;
	cout << "****Deducciones Totales****" << endl;
	cout << "Monto por sindicato = C$" << montoSindicato << endl;
	cout << "Monto por INSS = C$" << montoINSS << endl;
	cout << "Monto pot IR = C$" << montoIR << endl;
	cout << "Monto deducciones totales = C$" << deduccionesTotales << endl;
	cout << "*****Ingreso total neto*****";
	cout << "Ingreso o salario neto = C$" <<ingresoNeto << endl;
	cout << "Deducciones del empelador ";
	cout <<"Monto deducciones del emplador" << montoINSSPatronal << endl;
	
	
		return 0;
}