Algoritmo sin_titulo
	//Icosaedro
	//Variables
	Definir area, volumen, arista Como Real
	//Proceso 
	
	Escribir "Ingrese el valor de la arista"
	leer arista
	
	Si ( arista > 0 ) Entonces
		
		volumen <- ( 5 / 12) * ( 3 + raiz ( 5) ) * arista ^ 3
		area <- 5 * arista ^ 2 * raiz ( 3 )
		
		Escribir "El area del icosaedro es de: " area
		Escribir "El volumen del icosaedro es de: " volumen
		
	SiNo
		Escribir "El valor que usted ingreso no es valido para el sistema"
		
	FinSi
	
	Escribir "Gracias por utilizar nuestros servicios"
FinAlgoritmo
