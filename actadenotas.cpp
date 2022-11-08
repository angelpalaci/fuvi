/*
Nombre del archivo: actadenotas.cpp
Autor: Angel
Lugar: ITV
Instrucciones: El usuario ingresara los datos de cada istudiantes y se le imprimira el acta de notas con el promedio del grupo.
*/

#include <ostream>
#include <istream>
#include <string>


using namespace std;

int main(){
	const string carrera = "Tecnico Superior en Electronica Industrial";
	const string inscripcion = "2022IIS-EI025-01";
	const string asignatura = "Introduccion a la programacion ";
	const string codigoAsignatura = "EI025";
	const string pensum = "03-EI01";
	string nombreDocente;
	string fecha;
	int cantidadEstudiantes;
	
	
	double promedioNotas;
	
	//Pedir datos al docente ;
	cout <<  "__________________________________________________________" << endl;
	cout << "BIENVENIDO AL SISTEMA DE CONTROL Y REGISTRO ACADEMICO" << endl;
	cout << "***********************************************************" << endl;
	cout << "Nombre del docente"<< endl;
	getline(cin >> ws,nombreDocente);
	
	cout << "Fecha: (DD/MM/AAAA)";
	cin >> fecha;
	cout << "Cantidad de estudiantes del grupo: ";
    cin >> cantidadEstudiantes;
	
	string codigoCarnet[cantidadEstudiantes];
	string nombreCompleto[cantidadEstudiantes];
	int primerParcial[cantidadEstudiantes];  //25
	int segundoParcial[cantidadEstudiantes]; //25
	int tercerParcial[cantidadEstudiantes];  //25
	int acumulados[cantidadEstudiantes];	 //25	
	int notaFinal[cantidadEstudiantes];      //100
	char observacion[cantidadEstudiantes];   // R- Reprobado, A- Aprobado
	
	

	cout << "***********************************************************" << endl;
	cout << "INGRESE LOS DATOS DE CADA ESTUDIANTES " << endl;
	cout << "***********************************************************" << endl;
	for ( int i = 0; i < cantidadEstudiantes; i++){
		cout << "Estudiante [" << i+1 << "]" << endl;
		cout << "Codigo de carnet = ";
		cin >> codigoCarnet;
		cout << "\nNombre completo = ";
		getline(cin >> ws,nombreCompleto[i]);
		cout << "\nNota pimer parcial = ";
		cin >> pimerParcial[i];
		cout << "\nNota segundo parcial = ";
		cin >> segundoParcial[i];
		cout << "\nNota tercer parcial = ";
		cin >> tercerParcial[i];
	
	}
	//procesamiento
	//Calculo de la nota final
	for(int i= 0; i < cantidadEstudiantes; i++){
		notaFinal[i] = primerParcial[i] + segundoParcial[i] + tercerParcial[i] + acumulados[];
	}
		
	//Determinar si el estudiante aprobo o reprobo
	for(int i = 0; i < cantidadEstudiantes; i++){
		if (notafinal[i] ='R'){
			
		}else{
			observacion[i] = 'A'
		}
	}
	
	
	
	
	//calcular el promedio del grupo
	int sumaNotas = 0, promedioNotas;
	for ( int i = 0; i < cantidadEstudiantes; i++){
		sumaNotas += notaFinal[i]; // suma notas
	}
	
	promedioNotas = sumaNotas / cantidadEstudiantes;
	//presentacion de los resultados - Imprimir el acta de notas
	cout <<  "__________________________________________________________" << endl;
	cout << "ACTA DE CALIFICACIONES" << endl;
	cout << "***********************************************************" << endl;
	
	cout<< "Inscripcion:\t" << inscripcion << endl;
	cout << "Asignatura:\t"<< asignatura << endl;
	cout << "Docente:\t"  << nombreDocente << endl;
	cout << setw(15)<< "CARNET" << setw(35) <<"NOMBRE COMPLETO" << setw(10)<<
	
	
	
	
	
}