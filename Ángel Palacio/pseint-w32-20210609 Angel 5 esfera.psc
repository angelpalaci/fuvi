Algoritmo sin_titulo
	// Esfera
	//Variables 
	Definir area, volumen, radio, alturaZonaEsferica, alturaCasqueteEsferico, radioMayor, opciones  Como Real
	//Proceso
	Escribir "Que es lo que le gustaria calcualar de una esfera "
	Escribir "Esfera"
	Escribir "(1) Area"
	Escribir "(2) Volumen"
	Escribir "Zona esferica superior"
	Escribir "(3) Area"
	Escribir "(4) Volumen"
	Escribir "Casquete esferico inferior"
	Escribir "(5) Area"
	Escribir "(6) Volumen"
	
	leer opciones
	
	Segun opciones Hacer
		1:
			//Esfera 
			//Area
			Escribir "Ingrese el radio de la esfera"
			leer radio
			
			Si ( radio > 0 ) Entonces
				area <- 4 * pi * (radio ^ 2 )
				
				Escribir "El area de la esfera es de: " area
				
			SiNo
				Escribir "El valor que usted ingreso no es aceptado"
				
			FinSi
		2:
			
			//volumen
			
			Escribir "Ingrese el radio de la esfera"
			
			Si ( radio > 0 ) Entonces
				volumen <- ( 4 / 3)* pi * radio ^ 3 
				Escribir "El volumen de la esfera es de: " volumen
				
			FinSi
		3:
			//Zona esferica
			//area
			Escribir "Ingrese el valor del radio mayor"
			leer radioMayor
			
			si ( radio > 0 ) Entonces
				Escribir "Ingrese  la altura"
				leer alturaZonaEsferica
				area <- 2 * pi * radioMayor * alturaZonaEsferica
				
				Escribir "El area de la zona esferica superior es de: " area
			SiNo
				Escribir "El valor que usted ingreso no es aceptado"
			FinSi
		4:
			//volumen
			Escribir "Ingrese el valor de la altura"
			Leer alturaZonaEsferica
			si ( alturaZonaEsferica > 0 ) Entonces
				Escribir "Ingrese el valor del radio menor"
				leer radio
				volumen <- ( pi * alturaZonaEsferica * ( (alturaZonaEsferica ^ 2)) + ( 3 * ( radio ^ 3)) + ( 3 * ( radio ^ 2)) )  / 6
				
				Escribir "El volumen de la zona inferior esferica es de: " volumen
			SiNo
				Escribir "El valor que usted ingreso no es aceptado"
			FinSi
		5:
			//Casquete esferico
			//Area
			
			Escribir "Ingrese el valor del radio mayor"
			leer radioMayor 
			Si ( radioMayor > 0 ) Entonces
				Escribir "Ingrese la altura"
				leer alturaCasqueteEsferico
				
				area <- 2 * pi * radioMayor * alturaCasqueteEsferico
				Escribir "El area del casquete esferico es de: " area
			SiNo
				Escribir "El valor que usted ingreso no es aceptado"
				
				
			FinSi
		6:
			//volumen
			Escribir "Ingrese el valor de la altura"
			Leer alturaCasqueteEsferico
			
			si ( alturaCasqueteEsferico > 0 ) Entonces
				Escribir "Ingrese el radio mayor"
				leer radioMayor
				
				volumen <- (( pi *  alturaCasqueteEsferico ^ 2 ) * ( 3 * ( radioMayor - alturaCasqueteEsferico) )) / 3
				Escribir "El volumen del casquete esferico es de: " volumen
				
			SiNo
				Escribir "El valor que usted ingreso no es aceptado" 
				
			FinSi
	FinSegun
	
	 Escribir "Gracias por utilizar nustros servicios"
	
FinAlgoritmo
