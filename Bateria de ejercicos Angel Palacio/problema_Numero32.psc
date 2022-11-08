Algoritmo problema_Numero32
	Definir num1, num2, numMaximo, x Como Entero
	Escribir "Calcula el maximo comun divisor"
	Escribir "Ingrese dos numeros"
	leer num1, num2
	
	si num1 > 0 y num2 > 0 Entonces
		numMaximo <- 1
		x <- 1
		Mientras x <= num1 Hacer
			si num1 mod x == 0 y num2 mod x == 0 Entonces
				si x > numMaximo
					numMaximo <- x 
				FinSi
				
			FinSi
			x <- x + 1
			
		FinMientras
		Escribir "El Maximo común divisor es de: " numMaximo
	SiNo
		Escribir "Debes ingresar numeros mayores a cero"
	FinSi
	
	
	
FinAlgoritmo
