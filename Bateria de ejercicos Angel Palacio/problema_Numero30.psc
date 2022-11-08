Algoritmo problema_Numero30
	Definir A, B, C, variable Como Entero
	Dimension variable[10]
	Escribir "Ingresan al algoritmo adivina numero y posicion"
	Para A <- 1 Hasta 10 con paso 1 Hacer
		Escribir "Ingrese un número"
		leer variable(A)
	FinPara
	Escribir "Ingrese el numero a buscar"
	leer C
	B <- 0
	para A <- 1 Hasta 10 Con Paso 1 hacer
		si C == variable[A] Entonces
			Escribir "El numero ",C," se encuentra en la posicion ", A
			B <- 1
			
		FinSi
	FinPara
	si B == 0 Entonces
		Escribir  "El numero",C," no se encuentra en la variable"
		
	FinSi
	
FinAlgoritmo
