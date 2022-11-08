Algoritmo  problema_Numero15
	//Definir variables
	Definir ingreso, intentos como entero
	
	ingreso <- 0
	intentos <- 0
	Mientras ( intentos < 3 y ingreso == 0 ) Hacer
		Escribir "Ingrese la contraseña del sistema"
		leer contra
		
		si ( contra == "Tuani") Entonces
			Escribir " Usted a podido ingresar al sistema"
			intentos <- intentos + 8
		Sino 
			Limpiar Pantalla
			
			intentos <- intentos + 1
		FinSi
		
		
		
	FinMientras
	
	
FinAlgoritmo
