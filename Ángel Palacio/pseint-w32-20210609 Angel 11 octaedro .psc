Algoritmo sin_titulo
	//Octaedro
	//Variables
	Definir arista, area, volumen como real
	Escribir "Ingrese el valor de la arista"
	leer arista
	
	si ( arista > 0 ) Entonces
		area <- 2 * ( arista ^ 2 ) * raiz ( 3 )
		volumen <- ( raiz (2) / 3 ) * arista  ^ 3
		
		Escribir "El area del octaedro es de: " area
		Escribir "El volumen del octaedro es de: " volumen
		
	SiNo
		Escribir "El valor que usted ingreso no es valido"
	FinSi
	Escribir "Gracias por utilizar nuestros servicios"

FinAlgoritmo
