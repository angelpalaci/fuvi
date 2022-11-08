Algoritmo problema_Numero31
	// Viables
	Definir num, divisor Como Real
	Escribir "En contrar el divisor del numero"
	Escribir "Ingrese el numero"
	leer num
	divisor <- 1
	Mientras  divisor <= num Hacer
		si num mod divisor == 0 Entonces
			Escribir "El numero ",divisor, " esdivisible entre ",num
			
		FinSi
		divisor <- divisor + 1
	FinMientras
	
	
FinAlgoritmo
