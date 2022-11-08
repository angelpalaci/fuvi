Algoritmo problema_Numero24
	Definir A, B, C, D, raiz1, raiz2 Como Real
	Escribir "Ecuacion de segundo grado de tipo ax^2 + bx + c = 0  "
	Escribir "Ingrese el valor de a"
	leer A
	mientras A = 0 Hacer
		Escribir "Escriba nuevamente por que a no puede ser 0 "
		leer A
	FinMientras
	Escribir "Ingrese el valor de b"
	leer B
	Escribir "Ingrese el valor de c"
	leer C
	D <- ( B ^ 2) - ((4) * (A) * (C) )
	
	Escribir "La discriminante de la ecuacion es de: " D
	si D = 0 Entonces
		Escribir "La respuesta es: x= " D
	SiNo
		si D > 0 Entonces
			raiz1 <- (-B + (raiz ( D)) )/ (2 * A)
			raiz2 <- (-B-(raiz (D))) / (2 * A)
			Escribir "La raiz positiva es de" raiz1
			Escribir "La raiz negativa es de" raiz2
			
			
		FinSi
	FinSi
	
	
	
	
FinAlgoritmo
