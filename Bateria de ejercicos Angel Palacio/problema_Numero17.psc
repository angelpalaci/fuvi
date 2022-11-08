Algoritmo problema_Numero17
	Definir A, B , C Como Entero
	A <- 1
	B <- 0
	C <- 0
	Mientras A <= 100 Hacer
		si A mod 2 == 0 Entonces
			Escribir A
			B <- B +1
		
		FinSi
		si A mod 3 == 0 Entonces
			Escribir A
			C <- C + 1
			
			
		FinSi
		
		A <- A+ 1
	FinMientras
	Escribir "Numeros multiplos de 2: ",B
	Escribir "Numeros multilpos de 3: ",C
FinAlgoritmo
