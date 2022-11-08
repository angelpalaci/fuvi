Algoritmo  problema_Numero13
	//Definir variables
	Definir num, var, sumaPar Como Entero
	Escribir "Ingrese el numero limite hasta el caul desea conocer la suma de los numeros pares que contiene en esa cantidad"

	leer num
	
	sumaPar <- 0
	para var <- 1 hasta num Hacer
		si var mod 2 == 0 Entonces
			sumaPar <- sumaPar + var
			
		FinSi
		
	FinPara
	Escribir "La suma de los ", num,  " Numeros pares es: ",sumaPar
	
FinAlgoritmo
