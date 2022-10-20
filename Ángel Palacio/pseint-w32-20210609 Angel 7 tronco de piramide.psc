Algoritmo sin_titulo
	//Tronco de piramide
	//Varibles
	Definir areaLateral, areaTotal, areaMayor, areaMenor, perimetroMayor, perimetroMenor, apotemaPiramide, altura, volumen, opciones Como Real
	
	//Proceso	
	Escribir "Que quiere calcular del tronco de una piramide"
	Escribir "(1) Area Lateral"
	Escribir "(2) Area Total"
	Escribir "(3) El volumen "
	
	leer opciones
	
	
	Segun opciones Hacer
		1:
			//Area lateral
			Escribir "Ingrese el valor del perimetro de mayor base"
			leer perimetroMayor
			Si ( perimetroMayor > 0 ) Entonces
				Escribir "Ingrese el valor del perimetro de menor base"
				leer perimetroMenor
				Escribir "Ingrese la apotema de la piramide"
				leer apotemaPiramide
				
				areaLateral <- ((perimetroMayor + perimetroMenor) / 2) * apotemaPiramide
				
				Escribir "El area lateral del tronco de la piramide es de: " areaLateral
			SiNo
				Escribir "El valor que usted ingreso es incorrecto"
				
				
			FinSi
		2:
			
			//Area Total
			Escribir "Ingrese el valor del area lateral"
			leer areaLateral
			Si ( areaLateral > 0 ) Entonces
				
				Escribir "Ingrese el area base mayor"
				leer areaMayor
				Escribir "Ingrese el area base menor"
				leer areaMenor
				
				areaTotal <- areaLateral + areaMayor + areaMenor
				
				Escribir "El area total del tronco de piramide es de: " areaTotal
				
			SiNo
				Escribir "El valor que usted ingreso es incorrecto"
			FinSi
		3:
			//Volumen.
			Escribir "Ingrese el valor de la altura"
			leer altura
			si ( altura > 0) Entonces
				
				Escribir "Ingrese el area base mayor"
				leer areaMayor
				Escribir "Ingrese el area base menor"
				Leer areaMenor
				
				volumen <- ( 1 / 3 ) * altura * ( ( areaMayor + areaMenor ) + raiz(areaMayor * areaMenor))
				Escribir "El volumen del tronco de piramide es de: " volumen
				
			SiNo
				Escribir "El valor que usted ingreso es incorrecto"
			FinSi
			
	FinSegun
	
	Escribir "Gracias por utilizar nustros servicios"
FinAlgoritmo
