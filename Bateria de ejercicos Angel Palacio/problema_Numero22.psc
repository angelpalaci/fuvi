Algoritmo problema_Numero22
	Definir año Como Entero
	Escribir "Ingrese el año "
	leer año
	
	si año mod 4 == 0 Entonces
		si año mod 100 == 0 Entonces
			si año mod 400 == 0 Entonces
				Escribir "El año ",año," es bisiesto"
			sino 
				Escribir "El año ",año," no es bisiesto"
			FinSi
		SiNo
			Escribir "El año ",año," es bisiesto"
		FinSi
	SiNo
		Escribir "El año ",año," no es bisiesto"
	FinSi
	
	
	
	
FinAlgoritmo
