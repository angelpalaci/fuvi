Algoritmo problema_Numero_4
	//Definir variables
	Definir num1, num2, num3, contar Como Real
	
	
	Escribir "Ingrese el primer valor"
	leer num1 
	Escribir "ingrese el sengundo valor"
	leer num2 
	Escribir "Ingrese el tercer valor"
	leer num3 
	
	si ( num1 < 0 ) Entonces
		
		contar <- num2 * num3 * num1
		
		Escribir "El producto del sengudo valor y del tercero es de: " contar
		
	SiNo
		contar <- num1 + num2 + num3 
		
		Escribir "La suma de los tres valores es de: " contar
		
	FinSi
	Escribir "Gracias por utilizar nuestros servicios"
FinAlgoritmo
