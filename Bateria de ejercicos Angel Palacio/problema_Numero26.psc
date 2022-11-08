Algoritmo problema_Numero26
	Definir  producto, i, res Como Entero
	
	Escribir "Clacule el producto de los numeros"
	Escribir "Recuerda que el programa finaliza cuando escriba 0"
	i <- 1
	producto <- 0
	res <- 1
	mientras i <> 0 Hacer
		Escribir "Ingrese un numero"
		leer i
		si i <> 0 Entonces
			res <- res * i
			producto <- res
		FinSi
	FinMientras
	Escribir "El producto de los números es de: " producto
	
	
	
FinAlgoritmo
