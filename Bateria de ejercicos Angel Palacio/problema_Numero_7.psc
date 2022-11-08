Algoritmo  problema_Numero_7
	//Definir variables
	Definir compra, precioTotal, calculo Como Real
	Escribir "Bien venido a tienda Abarrotes Angel"
	Escribir "Ingrese el valor de su compra "
	leer compra
	
	Si ( compra > 0 ) Entonces
		Escribir "Usted a resivido un descuento del 15% en su compra "
		calculo <- ( compra / 100 ) * 15
		
		precioTotal <- compra - calculo
		Escribir "Su nuevo precio es de: " precioTotal
		
	SiNo
		Escribir "El valor que usted ingreso no es valido "
	FinSi
	
	Escribir "Gracias por preferir nuestros servicios "
FinAlgoritmo
