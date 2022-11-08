Algoritmo problema_Numero11
	//Definir variables
	Definir num1, num2, num3, num4, num5, num6, num7, num8, num9 como real
	Definir variable1, variable2, variable3, variable4, variable5, variable6, variable7,variable8, variable9 Como Real
	Definir numOriginal Como Entero
	
//Logica
	Escribir "Con el siguiente programa podra calcular el cuadrado de los primeros 9 números naturales despues del que usted coloque."
	Leer numOriginal
	
	//Problema
	si ( numOriginal > 0 ) Entonces
		
		num1 <- ( numOriginal + 1 ) 
		variable1 <- num1 ^ 2      
		
		Escribir "Primer digito"
		Escribir num1
		Escribir "Cuadrado"
		Escribir variable1
		
		num2 <- ( numOriginal + 2 )
		variable2 <- num2 ^ 2  
		
		Escribir "Segundo digito"
		Escribir num2
		Escribir "Cuadrado"
		Escribir variable2
		
		num3 <- (numOriginal + 3 )
		variable3 <- num3  ^ 2  
		Escribir "Tercer digito"
		Escribir num3
		Escribir "Cuadrado"
		Escribir variable3
		
		num4 <- (numOriginal + 4 )
		variable4 <- num4 ^ 2
		Escribir "Cuarto digito"
		Escribir num4
		Escribir "Cuadrado"
		Escribir variable4
		
		num5 <- ( numOriginal + 5 )
		variable5 <- num5 ^ 2
		Escribir "Quinto digito"
		Escribir num5
		Escribir "Cuadrado"
		Escribir variable5
		
		num6 <- ( numOriginal + 6 )
		variable6 <- num6 ^ 2
		Escribir "Sexto digito"
		Escribir num6
		Escribir "Cuadrado"
		Escribir variable6
		
		num7 <- ( numOriginal + 6 )
		variable7 <- num7 ^ 2
		Escribir "Septimo digito"
		Escribir num7
		Escribir "Cuadrado"
		Escribir variable7
		
		num8 <- ( numOriginal + 8 ) 
		variable8 <- num8 ^ 2
		Escribir "Octavo digito"
		Escribir num8
		Escribir "Cuadrado"
		Escribir variable8
		
		num9 <- ( numOriginal + 9 )
		variable9 <- num9 ^ 2
		Escribir "Noveno digito"
		Escribir num9
		Escribir "Cuadrado"
		Escribir variable9
		
	SiNo
		Escribir "El valor que usted ingreso no es valido"
		
	FinSi
	Escribir "Gracias por utilizar nuestro programa"
	
FinAlgoritmo
