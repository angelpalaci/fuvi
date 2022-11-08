Algoritmo problema_Numero35
	// variables
	Definir x , funcioXmas, funcioXmenos  Como Real
	Escribir "Ingrese un numero"
	Leer X
	funcioXmas <- (((x - 2)^ 2) / 2) + (((x - 4)^ 4) / 4) + (((x - 6)^ 6) / 6)
	
	Escribir "La el valor positivo del resultado es de: " funcioXmas
	
	funcioXmenos <- (((x + 2)^ 2) / 2) + (((x + 4)^ 4) / 4) + (((x + 6)^ 6) / 6)
	Escribir "La el valor negativo del resultado es de: " funcioXmenos
FinAlgoritmo
