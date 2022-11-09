Algoritmo sin_titulo
	//Tetraedro
	//Variables
	Definir artista, areaTotal, volumen Como Real
	//Proceso 
	//Area total y volumen
	Escribir "Ingrese la medida de la artista"
	leer lados
	
	Si (lados > 0 ) Entonces
		areaTotal <- ( artista ^ 2 ) * raiz ( 3) 
		Escribir "El area total del tetraedro es de: " areaTotal
		
		volumen <- ( raiz ( 2) / 12) * artista ^ 3
		
		Escribir "El volumen del tetraedro es de: " volumen
	SiNo
		Escribir "El valor que ingreso no es aceptado"
	Fin si
	Escribir "Gracias por utilizar nuestros cervicios"
FinAlgoritmo
