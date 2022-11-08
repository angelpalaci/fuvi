Algoritmo problema_Numero39
	// variables
	Definir nombre como cadena
	Definir sueldo como entero
	
	Escribir "Bienvenido a Finaciera AR"
	Escribir "Ingrese su nombre estimado usuario"
	leer nombre
	Escribir "Introduzca su sueldo mensual"
	leer sueldo 
	
	si ( sueldo < 200000) Entonces
		Escribir "   " nombre "  usted no puede tener derecho a un credito su salario minimo debe ser de C$200,000"
		
	FinSi
	
	si ( sueldo > 200000 ) Entonces
		si ( sueldo <= 500000)
			Escribir "  " nombre " usted tiene derecho a un credito de C$500,000"
			
		FinSi
		
		
	FinSi
	
	si ( sueldo > 500000 ) Entonces
		si (sueldo <= 1000000) Entonces
			Escribir "  " nombre " usted tiene derecho a un credito de C$2,000,000"
			
		FinSi
		
	FinSi
	Escribir "Gracias por utilizar nuestros cervicios."
FinAlgoritmo
