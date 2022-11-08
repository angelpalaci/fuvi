Algoritmo problema_Numero20
	Definir A, B, C Como Entero
	Escribir "Ingrese la cantidad de digitos"
	leer C
	
	para A <- 1 Hasta C Hacer
		para B <- 1 hasta C Hacer
			
			si A > 1 Y A < C Y B > 1 Y B < C Entonces
				Escribir "  " Sin Saltar
			sino 
				Escribir "* " Sin Saltar
				
				
			FinSi
			
		FinPara
		Escribir " " 
	FinPara
	
FinAlgoritmo
