Algoritmo problema_Numero33
	// variables
	Definir numHijos Como Entero
	Definir familia como cadena
	Definir total1, total2, total3 Como Real
	
	Escribir "Colegio Mi Casita"
	Escribir "Matricula 30U$"
	Escribir "Mensualidad de 20U$"
	Escribir "Ingrese la familia"
	leer familia
	Escribir "Ingrese la cantidad de hijos que tiene en nuestra escuela."
	leer numHijos
	mensualidad <- 20
	matricula <- 30
	si (numHijos = 1 ) Entonces
		
		total1 <- numHijos * mensualidad * matricula
		Escribir "Monto total a pagar es de: " total1 "U$"
	FinSi
	
	si ( numHijos = 2 ) Entonces
		total1 <- numHijos * mensualidad * matricula
		total2 <- ( total2 * 0.10)
	    Escribir "Familia " familia " a resivido un  descuento de 10% por cantidad de hijos registrados"
		Escribir "Monto total a pagar es de: " total2 "U$"
	FinSi
	
	si ( numHijos >= 3 ) Entonces
		
		total1 <- numHijos * matricula * mensualidad
		total2 <- total1 * 0.20
		Escribir "Familia " familia " a resivido un  descuento de 20% por cantidad de hijos registrados"
		Escribir "Monto total a pagar es de: " total2 "U$"
	SiNo
		Escribir "El numero que ingreso no es valido"
	FinSi
	
FinAlgoritmo
