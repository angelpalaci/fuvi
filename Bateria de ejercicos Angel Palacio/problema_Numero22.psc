Algoritmo problema_Numero22
	Definir a�o Como Entero
	Escribir "Ingrese el a�o "
	leer a�o
	
	si a�o mod 4 == 0 Entonces
		si a�o mod 100 == 0 Entonces
			si a�o mod 400 == 0 Entonces
				Escribir "El a�o ",a�o," es bisiesto"
			sino 
				Escribir "El a�o ",a�o," no es bisiesto"
			FinSi
		SiNo
			Escribir "El a�o ",a�o," es bisiesto"
		FinSi
	SiNo
		Escribir "El a�o ",a�o," no es bisiesto"
	FinSi
	
	
	
	
FinAlgoritmo
