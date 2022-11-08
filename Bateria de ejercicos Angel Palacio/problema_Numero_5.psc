Algoritmo problema_Numero_5
	//Definir variables
	Definir num1, potencia, raiz_ Como Real
	
Escribir "Ingrese el numero que desee"
leer num1

si ( num1 <= 0 ) Entonces
	Escribir "El numero que usted ingreso no es valido en el sistema "
	
SiNo
	
	potencia <- num1 ^ 2
	raiz_ <- raiz ( num1)
	
	Escribir "El cuadrado del numero " num1 " es: " potencia
	Escribir "La raiz del numero " num1 " es de: " raiz_
FinSi
	
Escribir "Gracias por utilizar nuestros servicios"
	
FinAlgoritmo
