Algoritmo  problema_Numero_6
		//Definir variables
	Definir ni�os, ni�as, porcentajeNi�as, porcentajeNi�os Como Real
	
	Escribir "Ingrese el numero de ni�as de la escuela"
	leer ni�as
	Escribir "Ingrese el numero de ni�os de la escuela"
	leer ni�os
	
	si ( ni�as >= 0 ) Entonces
		si ( ni�os >= 0 ) Entonces
			total <- ni�as + ni�os
			porcentajeNi�as<- (ni�as  * 100 ) / total
			porcentajeNi�os <- ( ni�os * 100 ) / total
			
			Escribir "El porcentaje de las ni�as es de: " porcentajeNi�as
			Escribir "El porcentaje de los ni�os es de: " porcentajeNi�os
		SiNo
			Escribir "El valor de los ni�os no es valido "
			
		FinSi
		
	SiNo
		Escribir "El valor de ni�as no es valido"
	FinSi
	Escribir "Gracias por utilizar nuestros servicios"
FinAlgoritmo
