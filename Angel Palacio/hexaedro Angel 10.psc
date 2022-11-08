Algoritmo sin_titulo
	// hexaedro
	
	Definir volumen, area, arista Como Real
	
	Escribir "Ingrese el valor de la arista"
	leer arista
	
	Si ( arista > 0 ) Entonces
		area <- 6 * area ^ 2
		volumen <- arista ^ 3
		
		Escribir "El area del hexaedro es de: " area
		Escribir "El volumen del hexaedro es de: " volumen
	SiNo
		Escribir "El valor que usted ingreso no es valido para el sistma"
		
	FinSi
	Escribir "Gracias por utilizar nuestros servicios"
	
FinAlgoritmo
