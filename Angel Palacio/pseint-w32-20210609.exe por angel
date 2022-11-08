Algoritmo cuerpos_Geometricos
	//Prisma
	Definir nL, Pb, H, Al, Ab, ap, v, At, P, opcines Como Real
	
	Escribir "(1) Area Lateral"
	Escribir "(2) Area Total"
	Escribir "(3) Volumen"
	
	Leer opcines
	
	Segun opcines Hacer
		
		1:
			
	// Area lateral
	Escribir " Introduzca perimetro base si no presenta esta variable por favor coloque el numero 0 "
	Leer pb
	//
	si ( pb > 0 ) Entonces
		Escribir "Introduzca la altura"
		leer h
		
		Al <- pb * h 
		
		Escribir " El area lateral del prisma es de:" Al
	SiNo
		Escribir "Introduzca el numero de lados"
		Leer nL
		Escribir "Introduzca la altura"
		leer h
		Al <- nL * h
		Escribir " El area lateral del prisma es de:" Al
	FinSi
2:
	
	//Area total
	Escribir " Introduzca area lateral si no presenta esta variable por favor coloque el numero 0 "
	Leer Al
	si ( Al > 0 ) Entonces
		Escribir "Introduzca el area base"
		leer Ab
		
		At <- Al * (2 * Ab)
		
		Escribir " El area total del prisma es de:" At
	SiNo
		Escribir "Numero no valido por favor introduzca otro"
	
	FinSi
	
3:
	
	//Volumen
	Escribir " Introduzca area base si no presenta esta variable por favor coloque el numero 0 "
	Leer Ab
	si ( Ab > 0 ) Entonces
		Escribir "Introduzca la altura"
		leer h
		
		V <- Ab * h
		
		Escribir " El volumen del prisma es de:" v
	SiNo
		Escribir "Introduzca el perimetro"
		leer P
		Escribir "Introduzca la apotema base"
		Leer ap
		Escribir "Introduzca la altura"
		leer h
		
		v <- ((P * ap) / 2) * h
		
		Escribir " El volumen del prisma es de:" v
		
	FinSi
	
FinSegun
Escribir "Gracias por utilizar nuestro servicio"
	
FinAlgoritmo
