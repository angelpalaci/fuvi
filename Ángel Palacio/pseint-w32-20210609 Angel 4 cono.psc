Algoritmo sin_titulo
	//Cono
	Definir areaLateral, perimetroBase, generatriz, areaTotal, altura, volumen, radio, areaBase, opciones Como Real
	
	//Proceso 
	
	Escribir "Que quiere calcular de un cono"
	Escribir "(1) Area Lateral"
	Escribir "(2) Area Total"
	Escribir "(3) El volumen "
	Escribir "(4) Generatriz"
	leer opciones
	
		
	
	Segun opciones Hacer
		1: 
			//Area lateral
			Escribir "Ingrese perimetro base del cono si no presenta esta variable por favor colo que el numero 0"
			Leer perimetroBase
			
			Si ( perimetroBase > 0) Entonces
				Escribir "Ingrese la generatriz"
				Leer generatriz
				
				areaLateral <- (perimetroBase * generatriz ) / 2
				Escribir "El area lateral del cono es de: " areaLateral
			SiNo
				Escribir "Ingese el radio del cono"
				Leer radio
				Escribir "Ingrese la generatriz"
				leer generatriz
				
				areaLateral <- PI * radio * generatriz
				
				Escribir "El area lateral del cono es de: " areaLateral
			FinSi
			
		2:
			//Araea Total
			Escribir "Ingese la area base del cono"
			leer areaBase
			
			Si ( areaBase > 0 ) Entonces
				
				Escribir "Ingrese el area lateral"
				leer areaLateral
				
				areaTotal <- areaLateral + areaBase
				
				Escribir "El area total del cono es de: " areaTotal
			SiNo
				Escribir "Ingrese el radio del cono"
				Leer radio
				Escribir "Ingrese la generatriz "
				leer generatriz
				
				areaTotal <- pi * radio  * ( generatriz + radio)
				
				Escribir "El area total del cono es de: " areaTotal
				
			FinSi
		3:
			// Volumen 
			Escribir "Ingrese el area base del cono"
			leer areaBase
			Si ( areaBase > 0 ) Entonces
				
				Escribir "Ingrese la altura del cono"
				leer altura
				
				volumen <- ( areaBase * altura ) / 3
				
				Escribir "El volumen del cono es de: " volumen
				
			SiNo
				Escribir "Ingrese el radio del cono"
				leer radio
				Escribir "Ingrese la altura del cono"
				leer altura
				
				volumen <- ( Pi * (radio ^ 2 ) * altura) / 3
				Escribir "El volumen del cono es de: " volumen
				
			FinSi
		4:
			//generatriz
			Escribir "Ingrese la altura del cono"
			leer altura
			Si ( altura > 0 ) Entonces
				Escribir "Ingrese el valor del radio"
				leer radio
				
				generatriz <- raiz(( altura ^ 2 ) + ( radio ^ 2)  )
				Escribir "La generatriz del cono es de: " generatriz
			SiNo
				
				Escribir "El numero que usted ingreso no es valido"
				
			FinSi
			
	FinSegun

	Escribir "Gracias por utilizar nustros servicios"
FinAlgoritmo
