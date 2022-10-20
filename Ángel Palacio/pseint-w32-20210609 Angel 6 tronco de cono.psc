Algoritmo sin_titulo
	//Tronco de cono
	
	//Varibles
	Definir arealateral, generatriz, radioMayor, radioMenor, areaTotal, Volumen, areaBaseMayor, areaBaseMenor, altura, opciones Como Real
	//Proceso 
	Escribir "Que quiere calcular del tronco de cono"
	Escribir "(1) Area Lateral"
	Escribir "(2) Area Total"
	Escribir "(3) El volumen "
	
	leer opciones
	
	
	
	Segun opciones Hacer
		1:
			//Area lateral
			Escribir "Ingrese la generatriz"
			leer generatriz
			Si ( generatriz > 0 ) Entonces
				Escribir "Ingrese radio mayor "
				leer radioMayor
				Escribir "Ingrese el radio menor"
				leer radioMenor
				
				arealateral <- pi * generatriz * ( radioMayor + radioMenor)
				Escribir "El area lateral del tronco de cono es de: " arealateral
			SiNo
				Escribir "El valor que usted ingreso no es valido"
			FinSi
		2:
			//Area total
			
			Escribir "Ingrese el area lateral"
			leer arealateral
			
			si ( arealateral > 0 ) Entonces
				Escribir "Ingrese el area base mayor"
				leer areaBaseMayor
				Escribir "Ingrese el area base menor"
				Leer areaBaseMenor
				
				areaTotal <- arealateral + areaBaseMayor + areaBaseMenor
				
				Escribir "El area total del tronco de cono es de: " areaTotal
			SiNo
				Escribir "El valor que usted ingreso no es valido"
				
			FinSi
		3:
			
			//Volumen
			
			Escribir "Ingrese el valor de la altura"
			leer altura
			Si ( altura > 0 ) Entonces
				Escribir "Ingrese el valor del radio mayor"
				leer radioMayor
				Escribir "Ingrese el valor del radio menor"
				leer radioMenor
				
				Volumen <- ( 1 / 3 ) * PI * altura * ( (radioMayor ^ 2) + (radioMenor ^ 2) + ( radioMayor * radioMenor))                                   
				Escribir "El volumen del tronco del cono es de: " Volumen
			FinSi
			
	FinSegun
	
	Escribir "Gracias por utilizar nustros servicios"
FinAlgoritmo
