Algoritmo problema_Numero27
	Escribir "Ingrese el numero de dias por el cual desea estar fuera del pais"
	leer numD
	
	si ( numD >= 7) Entonces
		Escribir "Si sus dias son superior a 7 usted tiene que viajar mas de 1000 Kilometros"
		Escribir "Ingrese el numero de kilometros del vuelo"
		Leer numV
		si ( numV > 1000) Entonces
			precio <- ( numV * 8.50)
			
			calculo <- precio * 0.30
			calculo2 <- precio - calculo
			Escribir "El precio de su voleto es de " precio "U$"
		
			Escribir "Pero usted resivio el descuento por kilometros a recorrer " calculo2 "U$"
		FinSi
			
		
	SiNo
		Escribir "Ingrese el numero de kilometros a recorre r"
		leer numV
		
		precio <- ( numV * 8.50)
		
		Escribir "El precio de su voleto es de: " precio "U$"
	FinSi
	
FinAlgoritmo
