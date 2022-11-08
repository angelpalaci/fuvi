Algoritmo problema_Numero_8
	//Definir variables
	Definir  respuesta, num Como Entero
	Definir ayuda1 Como Real
	
	Escribir "Ingrese el numero"
	leer num
	
	Si ( num >= 0) Entonces
		ayuda1 <- num mod 2      
		
		si ( ayuda1 = 0 )
			
			Escribir "El " num " Es par"
		SiNo
			Escribir "El numero que usted ingreso no es par"
		FinSi
	SiNo
		
		Escribir "El valor numerico que ingreso no es valido"
		
	FinSi
	
	Escribir "Gracias por utilizar nuestros cervicios"
FinAlgoritmo
