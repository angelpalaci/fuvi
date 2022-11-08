Algoritmo problema_Numero25
	
	Definir A,B,C,F,D, opciones Como Real
	
	
	
	Escribir "Que conversion desea llevar acabo"
	Escribir "De celcios a faradios presione 1"
	Escribir "De faradios a celcios presione 2"
	
	leer opciones
	
	
	
	
	
	si ( opciones = 1) Entonces
		
		Escribir "Ingrese los celcios"
		leer B
		
		F <- ( B * 1.8) + 32
		
		Escribir "El valor en faradios es de " F "Faradios"
	SiNo
		Escribir "El valor que usted ingreso no es valido"
	FinSi
	si ( opciones = 2 ) Entonces
		Escribir "Ingrese el valor de los Faradios"
		leer F
		
		C <- ( F - 32) / 1.8
		
		Escribir "El valor es de " C "°"
	SiNo
		Escribir "El valor que usted ingreso no es valido"
	FinSi
	
	
	
	
	
	
	
	
	
FinAlgoritmo
