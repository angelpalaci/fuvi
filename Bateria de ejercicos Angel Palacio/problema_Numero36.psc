Algoritmo problema_Numero36
	Definir trabajador como cadena
	Definir oras, montoOras, normal, extra, total Como Real
	Escribir "Ingrese su nombre estimado colaborador"
	leer trabajador
	Escribir "Ingrese el numero de oras que realizo en esta semana recuerde que una hora son 6U$"
	
	leer oras
	
	si (oras > 48 ) Entonces
		
		extra <- oras - 48
		montoOras <- extra * (6 + (6 * 0.35))
		normal <- 48 * 6
		
		total <- montoOras + normal
		Escribir "   " ,trabajador,"  " "Usted realizo " ,extra, " oras extra"
		Escribir " Su salario semanal es de " total "U$"
		
		
	SiNo
		
		normal <- oras * 6
		Escribir "    " , trabajador, "No presenta ninguna ora extra"
		Escribir "Su salario semanal es de " total "U$"
		
	FinSi
	
	
	
	
FinAlgoritmo
