Algoritmo problema_Numero_3
	//Definir variables
	Definir num1, num2, num3 Como Real
	//Desarrollo
	
	Escribir "Ingrese el primer valor"
	leer num1
	Escribir "ingrese el sengundo valor"
	leer num2
	Escribir "Ingrese el tercer valor"
	leer num3
	
	si ( num1 > num2) Entonces
		Si ( num1 > num3)
			Escribir "El numero que es mayor es " num1
		FinSi
	FinSi
	
	si ( num2 > num3) Entonces
		Si ( num2 > num1)
			Escribir "El numero que es mayor es " num2
		FinSi
	FinSi
	
	si ( num3 > num2) Entonces
		Si ( num3 > num1)
			Escribir "El numero que es mayor es " num3
		FinSi
	FinSi
	Escribir "Gracias por utilizar nuestros servicios"
FinAlgoritmo
