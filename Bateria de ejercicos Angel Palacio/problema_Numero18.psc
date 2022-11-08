Algoritmo problema_Numero18
	Definir dia, mes, año Como Entero
	Definir nombreMes Como Caracter
	
	Escribir "Ingrese el dia"
	leer dia
	Escribir "Ingrese el mes"
	leer mes
	Escribir "Ingrese el año"
	leer año
	
	
	si dia < 1 o dia > 31 Entonces
		Repetir
			Escribir "Dia fuera de rango"
			Escribir "Ingrese un dia"
			leer dia
			
		Hasta Que dia > 0 Y dia > 32
	FinSi
	SI m < 1 o m > 12 Entonces
		Repetir
			Escribir "Mes fuera de rango"
			Escribir "Ingrese un mes"
			leer mes
			
		Hasta Que mes > 0 y mes < 13
	FinSi
	SI año > 1 Entonces
		Repetir
			Escribir "Año fuera de rango"
			Escribir "Ingrese un año"
			leer año
			
		Hasta Que año > 0
	FinSi
	Segun mes Hacer
		caso 1: nombreMes <- "Enero"
		caso 2: nombreMes <- "Febrero"
		caso 3: nombreMes <- "Marzo"
		caso 4: nombreMes <- "Abril"
		caso 5: nombreMes <- "Mayo "
		caso 6: nombreMes <- "Juni "
		caso 7: nombreMes <- "Julio"
		caso 8: nombreMes <- "Agosto"
		caso 9: nombreMes <- "Septiembre"
		caso 10: nombreMes <- "Octubre"
		caso 11: nombreMes <- "Noviembre"
		caso 12: nombreMes <- "Diciembre"
	FinSegun
	
	Escribir dia " de ", nombreMes, " del " , año
FinAlgoritmo
