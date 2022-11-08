






#include<iostream>

using namespace std;
int main(){
	int edad;
	string nombre;
	cout<<"Ingrese su nombre: ";
	getline (cin,nombre);
	cout << "\nIngrese du edad: ";
	cin >> edad;
	
	while (edad < 0){
		cout << "ingrese su edad: ";
		cin >> edad;
		
	}
	
	
	cout << "Bienvenido, "<<nombre << endl;
	cout <<"Fin de la aplicacion";
	return 0;
	
	
	
}