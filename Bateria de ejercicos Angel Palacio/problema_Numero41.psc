Algoritmo problema_Numero41
	
	Definir cantidadlitros, total, A Como Real
	Definir opciones Como Entero
	Escribir "Bienvenido a gasolinera Angel"
	Escribir "Elija cual de las opciones necesita"
	Escribir (1) "- Gasolina regular"
	Escribir (2) "- Gasolina Súper"
	Escribir (3) "- Diesel"
	
	leer opciones
	Segun  opciones Hacer
		1:
			Escribir "Ingrese la cantidad de litros que desea"
			leer cantidadlitros
			
			total <- cantidadlitros * 32.85
			Escribir "El monto total a pagar sera de C$" total
		2:
			
			 Escribir "Ingrese la cantidad de litros que desea"
			leer cantidadlitros
			
			total <- cantidadlitros * 33.48
			Escribir "El monto total a pagar sera de C$" total
		3:
			Escribir "Ingrese la cantidad de litros que desea"
			leer cantidadlitros
			
			total <- cantidadlitros * 28.45
			Escribir "El monto total a pagar sera de C$" total
	FinSegun
FinAlgoritmo
