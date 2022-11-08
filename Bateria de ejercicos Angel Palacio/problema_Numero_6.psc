Algoritmo  problema_Numero_6
		//Definir variables
	Definir niños, niñas, porcentajeNiñas, porcentajeNiños Como Real
	
	Escribir "Ingrese el numero de niñas de la escuela"
	leer niñas
	Escribir "Ingrese el numero de niños de la escuela"
	leer niños
	
	si ( niñas >= 0 ) Entonces
		si ( niños >= 0 ) Entonces
			total <- niñas + niños
			porcentajeNiñas<- (niñas  * 100 ) / total
			porcentajeNiños <- ( niños * 100 ) / total
			
			Escribir "El porcentaje de las niñas es de: " porcentajeNiñas
			Escribir "El porcentaje de los niños es de: " porcentajeNiños
		SiNo
			Escribir "El valor de los niños no es valido "
			
		FinSi
		
	SiNo
		Escribir "El valor de niñas no es valido"
	FinSi
	Escribir "Gracias por utilizar nuestros servicios"
FinAlgoritmo
