Algoritmo problema_Numero23
	Definir unidades, A, B, C  como entero
	Definir suma1, suma2, suma3, sumaTotal Como Real
	
	Escribir "Ingrese la cantidad de Bocadillos de jamon que consumio"
	leer A 
	
	si A > 0 Entonces
		suma1 <- A * 1.5
		Escribir "El costo es de: " suma1 "C$"
	FinSi
	Escribir "Ingrese la cantidad de frescos que consumio"
	Leer B
	
	si B > 0 Entonces
		suma2 <- B * 1.05
		
		Escribir "El costo es de: " suma2 "C$"
	FinSi
	
	Escribir "Ingrese la cantidad de cerveza que consumio"
	leer C
	
	si C > 0 Entonces
		suma3 <- C * 0.75
		
		Escribir "El costo es de: " suma3 "C$"
	FinSi
	sumaTotal <- suma1+suma2+suma3
	Escribir "El consumo total es de"
	Escribir sumaTotal " C$"
FinAlgoritmo
