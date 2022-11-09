Algoritmo cuerpos_Geoetricos
	// datos de entradad
	Definir elegir Como Entero
	Escribir 'Bienvenido al algoritmo para calcular cuerpos geometricos.'
	Escribir 'Aqui puede elegir con cual cuerpo geometrico desea calcular.'
	Escribir ' '
	Escribir (1),'-Prisma'
	Escribir (2),'-Cilindro'
	Escribir (3),'-Piramide'
	Escribir (4),'-Cono'
	Escribir (5),'-Esfera'
	Escribir (6),'-Tronco de cono'
	Escribir (7),'-Piramide'
	Escribir (8),'-Tatraedro'
	Escribir (9),'-Hexaedro'
	Escribir (10),'-Octaedro'
	Escribir (11),'-Icosaedro'
	Leer elegir
	
	Borrar Pantalla
	Segun elegir  Hacer
		1:
			// Prisma
			
			
			Definir nL,pb,h,Al,Ab,ap,v,At,P,opcines Como Real
			Escribir 'Que desea calcular de un prisma.'
			Escribir '(1) Area Lateral'
			Escribir '(2) Area Total'
			Escribir '(3) Volumen'
			
			Leer opcines
			Borrar Pantalla
			Segun opcines  Hacer
				1:
					// Area lateral
					Escribir ' Introduzca perimetro base'
					Escribir 'si no presenta esta variable por favor coloque el numero 0 '
					Leer pb
					Si (pb>0) Entonces
						Escribir 'Introduzca la altura'
						Leer h
						si h > 0 Entonces
							Al <- pb*h
							Escribir ' El area lateral del prisma es de:',Al
						SiNo
							Escribir "Valor no valido"
						FinSi
						
					SiNo
						Escribir 'Introduzca el numero de lados'
						Leer nL
						Si (nL>0) Entonces
							Escribir 'Introduzca la altura'
							Leer h
							si h > 0 Entonces
								Al <- nL*h
								Escribir ' El area lateral del prisma es de:',Al
							SiNo
								Escribir "Valor no valido"
							FinSi
							
						SiNo
							Escribir 'Valor no valido'
						FinSi
					FinSi
				2:
					// Area total
					Escribir ' Introduzca area lateral '
					Escribir 'si no presenta esta variable por favor coloque el numero 0 '
					Leer Al
					Si (Al>0) Entonces
						Escribir 'Introduzca el area base'
						Leer Ab
						si Ab > 0 Entonces
							At <- Al*(2*Ab)
							Escribir ' El area total del prisma es de:',At
						SiNo
							Escribir "Valor no valido"
						FinSi
						
					SiNo
						Escribir 'Numero no valido por favor introduzca otro'
					FinSi
				3:
					// Volumen
					Escribir ' Introduzca area base '
					Escribir 'si no presenta esta variable por favor coloque el numero 0 '
					Leer Ab
					Si (Ab>0) Entonces
						Escribir 'Introduzca la altura'
						Leer h
						si h > 0 Entonces
							v <- Ab*h
							Escribir ' El volumen del prisma es de:',v
						SiNo
							Escribir "Valor no valido"
						FinSi
						
					SiNo
						Escribir 'Introduzca el perimetro'
						Leer P
						Si (P>0) Entonces
							Escribir 'Introduzca la apotema base'
							Leer ap
							Si (ap>0) Entonces
								Escribir 'Introduzca la altura'
								Leer h
								si h > 0 Entonces
									v <- ((P*ap)/2)*h
									Escribir ' El volumen del prisma es de:',v
								sino 
									Escribir "Valor no valido"
								FinSi
							SiNo
								Escribir "Valor no valido"
							FinSi
						SiNo
							Escribir 'Valor no valido'
						FinSi
					FinSi
			FinSegun
		
		
		2:
			// Cilindro
			// Variables
			Definir areaLateral,perimetroBase,altura,radio,volumen,areaTotal,areaBase Como Real
			// Proceso
			Escribir 'Que desea calcular de un cilindro'
			Escribir '(1) Area Lateral'
			Escribir '(2) Area Total'
			Escribir '(3) Volumen'
			Leer opcines
			Borrar Pantalla
			Segun opcines  Hacer
				1:
					// Area lateral
					Escribir 'Introduzca el perimetro Base del cilindro '
					Escribir 'si no presenta esta variable por favor introduzca 0 '
					Leer perimetroBase
					Si (perimetroBase>0) Entonces
						Escribir 'Introduzca la altura'
						Leer altura
						si altura > 0 Entonces
							areaLateral <- perimetroBase*altura
							Escribir ' El area lateral del cilindro es de: ',areaLateral
						SiNo
							Escribir "Valor no valido"
						FinSi
						
					SiNo
						Escribir 'Escriba el radio del cilindro'
						Leer radio
						Si (radio>0) Entonces
							Escribir 'Introduzca la altura'
							Leer altura
							Si (altura>0) Entonces
								areaLateral <- (2*PI*radio*altura)
								Escribir ' El area lateral del cilindro es de: ',areaLateral
							SiNo
								Escribir 'Valor no valido'
							FinSi
						SiNo
							Escribir 'Valor no valido'
						FinSi
					FinSi
				2:
					// area total
					Escribir 'Introduzca la area base del cilindro'
					Escribir 'si no presenta esta variable por favor introduzca 0 '
					Leer areaBase
					Si (areaBase>0) Entonces
						Escribir ' Ingrese el area lateral '
						Leer areaLateral
						Si (areaLateral>0) Entonces
							areaTotal <- areaLateral+(2*areaBase)
							Escribir 'El area total del cilindro es:',areaTotal
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'Ingrese el radio del cilindro'
						Leer radio
						Si (radio>0) Entonces
							Escribir 'Ingrese la altura'
							Leer altura
							Si (altura>0) Entonces
								areaTotal <- (2*PI*radio)*(altura+radio)
								Escribir 'El area total del cilindro es:',areaTotal
							SiNo
								Escribir 'Valor no valido'
							FinSi
						SiNo
							Escribir 'Valor no valido'
						FinSi
					FinSi
				3:
					// volumen
					Escribir 'Introduzca la area base del cilindro '
					Escribir 'si no presenta esta variable por favor introduzca 0 '
					Leer areaBase
					Si (areaBase>0) Entonces
						Escribir ' Ingrese la altura'
						Leer altura
						Si (altura>0) Entonces
							volumen <- areaBase*altura
							Escribir 'El volumen del cilindro es de:',volumen
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'Ingrese el radio del cilindro'
						Leer radio
						Si (radio>0) Entonces
							Escribir 'Ingrese la altura'
							Leer altura
							Si (altura>0) Entonces
								volumen <- (PI*radio^2)*altura
								Escribir 'El volumen del cilindro es de:',volumen
							SiNo
								Escribir 'Valor no valido'
							FinSi
						SiNo
							Escribir 'Valor no valido'
						FinSi
					FinSi
			FinSegun
		3:
			// Piramide
			// Variables 
			Definir areaLateral,perimetroBase,areaBase,areaTotal,altura,volumen,apotemaPiramide,apotemaBase Como Real
			// Proceso
			Escribir 'Elija lo que desea calcular de una piramide.'
			Escribir '(1) Area Lateral'
			Escribir '(2) Apotema Piramide'
			Escribir '(3) Area Total'
			Escribir '(4) Volumen'
			Leer opcines
			Borrar Pantalla
			Segun opcines  Hacer
				1:
					// Area lateral
					Escribir 'Ingrese el perimetro base de la piramide'
					Leer perimetroBase
					Si (perimetroBase>0) Entonces
						Escribir 'Introduzca la apotema de la piramide'
						Leer apotemaPiramide
						Si (apotemaPiramide>0) Entonces
							areaLateral <- (perimetroBase*apotemaPiramide)/2
							Escribir 'El area lateral de la piramide es de:',areaLateral
						SiNo
							Escribir 'Valor introducido no valido'
						FinSi
					SiNo
						Escribir 'El valor que introdujo no es valido'
					FinSi
				2:
					// apotema piramide
					Escribir 'Ingrese la altura de la piramide'
					Leer altura
					Si (altura>0) Entonces
						Escribir 'Ingrese la apotema base'
						Leer apotemaBase
						Si (apotemaBase>0) Entonces
							apotemaPiramide <- raiz((altura^2)+(apotemaBase^2))
							Escribir 'La apotema de la piramide es de:',apotemaPiramide
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'El valor que introdujo no es valido ingrese otro'
					FinSi
				3:
					// Area Total
					Escribir 'Ingrese el area Lateral de la piramide'
					Leer areaLateral
					Si (areaLateral>0) Entonces
						Escribir 'Ingrese el area base'
						Leer areaBase
						areaTotal <- areaLateral+areaBase
						Escribir 'El area Total de la piramide es de:',areaTotal
					SiNo
						Escribir 'El valor que usted ingreso n es valido ingrese otro'
					FinSi
				4:
					// volumen
					Escribir 'Ingrese el valor del area base de la piramide rectangular'
					Leer areaBase
					Si (areaBase>0) Entonces
						Escribir 'Ingrese el valor de la altura'
						Leer altura
						Si (altura>0) Entonces
							volumen <- (areaBase*altura)/3
							Escribir 'El volumen de la piramide es de: ',volumen
						SiNo
							Escribir 'Valor no valido.'
						FinSi
					SiNo
						Escribir 'El valor que usted ingreso n es valido ingrese otro'
					FinSi
			FinSegun
		4:
			// Cono
			Definir areaLateral,perimetroBase,generatriz,areaTotal,altura,volumen,radio,areaBase,opciones Como Real
			// Proceso 
			Escribir 'Que quiere calcular de un cono'
			Escribir '(1) Area Lateral'
			Escribir '(2) Area Total'
			Escribir '(3) El volumen '
			Escribir '(4) Generatriz'
			Leer opciones
			Borrar Pantalla
			Segun opciones  Hacer
				1:
					// Area lateral
					Escribir 'Ingrese perimetro base del cono '
					Escribir ' si no presenta esta variable por favor colo que el numero 0'
					Leer perimetroBase
					Si (perimetroBase>0) Entonces
						Escribir 'Ingrese la generatriz'
						Leer generatriz
						Si (generatriz>0) Entonces
							areaLateral <- (perimetroBase*generatriz)/2
							Escribir 'El area lateral del cono es de: ',areaLateral
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'Ingese el radio del cono'
						Leer radio
						Si (radio>0) Entonces
							Escribir 'Ingrese la generatriz'
							Leer generatriz
							Si (generatriz>0) Entonces
								areaLateral <- PI*radio*generatriz
								Escribir 'El area lateral del cono es de: ',areaLateral
							SiNo
								Escribir 'Valor ingresado no valido '
							FinSi
						SiNo
							Escribir 'Valor ingresado no valido'
						FinSi
					FinSi
				2:
					// Araea Total
					Escribir 'Ingese la area base del cono'
					Leer areaBase
					Si (areaBase>0) Entonces
						Escribir 'Ingrese el area lateral'
						Leer areaLateral
						areaTotal <- areaLateral+areaBase
						Escribir 'El area total del cono es de: ',areaTotal
					SiNo
						Escribir 'Ingrese el radio del cono'
						Leer radio
						Si radio>0 Entonces
							Escribir 'Ingrese la generatriz '
							Leer generatriz
							Si generatriz>0 Entonces
								areaTotal <- PI*radio*(generatriz+radio)
								Escribir 'El area total del cono es de: ',areaTotal
							SiNo
								Escribir 'Valor ingresado no valido'
							FinSi
							Escribir 'Valor ingresado no valido'
						FinSi
					FinSi
				3:
					// Volumen 
					Escribir 'Ingrese el area base del cono'
					Escribir 'Si no presenta esta variable coloque un 0'
					Leer areaBase
					Si (areaBase>0) Entonces
						Escribir 'Ingrese la altura del cono'
						Leer altura
						Si altura>0 Entonces
							volumen <- (areaBase*altura)/3
							Escribir 'El volumen del cono es de: ',volumen
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'Ingrese el radio del cono'
						Leer radio
						Si radio>0 Entonces
							Escribir 'Ingrese la altura del cono'
							Leer altura
							Si altura>0 Entonces
								volumen <- (PI*(radio^2)*altura)/3
								Escribir 'El volumen del cono es de: ',volumen
							SiNo
								Escribir 'Valor no valido'
							FinSi
						SiNo
							Escribir 'Valor no valido'
						FinSi
					FinSi
				4:
					// generatriz
					Escribir 'Ingrese la altura del cono'
					Leer altura
					Si (altura>0) Entonces
						Escribir 'Ingrese el valor del radio'
						Leer radio
						Si radio>0 Entonces
							generatriz <- raiz((altura^2)+(radio^2))
							Escribir 'La generatriz del cono es de: ',generatriz
						SiNo
							Escribir 'Valor ingresado no valido'
						FinSi
					SiNo
						Escribir 'El numero que usted ingreso no es valido'
					FinSi
			FinSegun
		5:
			// Esfera
			// Variables 
			Definir area,volumen,radio,alturaZonaEsferica,alturaCasqueteEsferico,radioMayor,opciones Como Real
			// Proceso
			Escribir 'Que es lo que le gustaria calcualar de una esfera '
			Escribir 'Esfera'
			Escribir '(1) Area'
			Escribir '(2) Volumen'
			Escribir 'Zona esferica superior'
			Escribir '(3) Area'
			Escribir '(4) Volumen'
			Escribir 'Casquete esferico inferior'
			Escribir '(5) Area'
			Escribir '(6) Volumen'
			Leer opciones
			Borrar Pantalla
			Segun opciones  Hacer
				1:
					// Esfera 
					// Area
					Escribir 'Ingrese el radio de la esfera'
					Leer radio
					Si (radio>0) Entonces
						area <- 4*PI*(radio^2)
						Escribir 'El area de la esfera es de: ',area
					SiNo
						Escribir 'El valor que usted ingreso no es aceptado'
					FinSi
				2:
					// volumen
					Escribir 'Ingrese el radio de la esfera'
					Si (radio>0) Entonces
						volumen <- (4/3)*PI*radio^3
						Escribir 'El volumen de la esfera es de: ',volumen
					SiNo
						Escribir 'Valor no valido'
					FinSi
				3:
					// Zona esferica
					// area
					Escribir 'Zona esferica su perior'
					Escribir 'Ingrese el valor del radio mayor'
					Leer radioMayor
					Si (radio>0) Entonces
						Escribir 'Ingrese  la altura'
						Leer alturaZonaEsferica
						Si alturaZonaEsferica>0 Entonces
							area <- 2*PI*radioMayor*alturaZonaEsferica
							Escribir 'El area de la zona esferica superior es de: ',area
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'El valor que usted ingreso no es aceptado'
					FinSi
				4:
					// volumen
					Escribir 'Zona esferica su perior'
					Escribir 'Ingrese el valor de la altura'
					Leer alturaZonaEsferica
					Si (alturaZonaEsferica>0) Entonces
						Escribir 'Ingrese el valor del radio menor'
						Leer radio
						volumen <- (PI*alturaZonaEsferica*((alturaZonaEsferica^2))+(3*(radio^3))+(3*(radio^2)))/6
						Escribir 'El volumen de la zona inferior esferica es de: ',volumen
					SiNo
						Escribir 'El valor que usted ingreso no es aceptado'
					FinSi
				5:
					// Casquete esferico
					// Area
					Escribir 'Casquete esferico'
					Escribir 'Ingrese el valor del radio mayor'
					Leer radioMayor
					Si (radioMayor>0) Entonces
						Escribir 'Ingrese la altura'
						Leer alturaCasqueteEsferico
						Si alturaCasqueteEsferico>0 Entonces
							area <- 2*PI*radioMayor*alturaCasqueteEsferico
							Escribir 'El area del casquete esferico es de: ',area
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'El valor que usted ingreso no es aceptado'
					FinSi
				6:
					// volumen
					Escribir 'Casquete esferico'
					Escribir 'Ingrese el valor de la altura'
					Leer alturaCasqueteEsferico
					Si (alturaCasqueteEsferico>0) Entonces
						Escribir 'Ingrese el radio mayor'
						Leer radioMayor
						Si radioMayor>0 Entonces
							volumen <- ((PI*alturaCasqueteEsferico^2)*(3*(radioMayor-alturaCasqueteEsferico)))/3
							Escribir 'El volumen del casquete esferico es de: ',volumen
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'El valor que usted ingreso no es aceptado'
					FinSi
			FinSegun
		6:
			// Tronco de cono
			// Varibles
			Definir areaLateral,generatriz,radioMayor,radioMenor,areaTotal,volumen,areaBaseMayor,areaBaseMenor,altura,opciones Como Real
			// Proceso 
			Escribir 'Que quiere calcular del tronco de cono'
			Escribir '(1) Area Lateral'
			Escribir '(2) Area Total'
			Escribir '(3) El volumen '
			Leer opciones
			Borrar Pantalla
			Segun opciones  Hacer
				1:
					// Area lateral
					Escribir 'Ingrese la generatriz'
					Leer generatriz
					Si (generatriz>0) Entonces
						Escribir 'Ingrese radio mayor '
						Leer radioMayor
						Si radioMayor>0 Entonces
							Escribir 'Ingrese el radio menor'
							Leer radioMenor
							areaLateral <- PI*generatriz*(radioMayor+radioMenor)
							Escribir 'El area lateral del tronco de cono es de: ',areaLateral
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'El valor que usted ingreso no es valido'
					FinSi
				2:
					// Area total
					Escribir 'Ingrese el area lateral'
					Leer areaLateral
					Si (areaLateral>=0) Entonces
						Escribir 'Ingrese el area base mayor'
						Leer areaBaseMayor
						Si areaBaseMayor>=0 Entonces
							Escribir 'Ingrese el area base menor'
							Leer areaBaseMenor
							Si areaBaseMenor>=0 Entonces
								areaTotal <- areaLateral+areaBaseMayor+areaBaseMenor
								Escribir 'El area total del tronco de cono es de: ',areaTotal
							SiNo
								Escribir 'Valor no valido'
							FinSi
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'El valor que usted ingreso no es valido'
					FinSi
				3:
					// Volumen
					Escribir 'Ingrese el valor de la altura'
					Leer altura
					Si (altura>0) Entonces
						Escribir 'Ingrese el valor del radio mayor'
						Leer radioMayor
						Si readioMayor>0 Entonces
							Escribir 'Ingrese el valor del radio menor'
							Leer radioMenor
							Si radioMenor>0 Entonces
								volumen <- (1/3)*PI*altura*((radioMayor^2)+(radioMenor^2)+(radioMayor*radioMenor))
								Escribir 'El volumen del tronco del cono es de: ',volumen
							SiNo
								Escribir 'Valor no valido'
							FinSi
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'Valor no valido'
					FinSi
			FinSegun
		7:
			// Tronco de piramide
			// Varibles
			Definir areaLateral,areaTotal,areaMayor,areaMenor,perimetroMayor,perimetroMenor,apotemaPiramide,altura,volumen,opciones Como Real
			// Proceso	
			Escribir 'Que quiere calcular del tronco de una piramide'
			Escribir '(1) Area Lateral'
			Escribir '(2) Area Total'
			Escribir '(3) El volumen '
			Leer opciones
			Borrar Pantalla
			Segun opciones  Hacer
				1:
					// Area lateral
					Escribir 'Ingrese el valor del perimetro de mayor base'
					Leer perimetroMayor
					Si (perimetroMayor>0) Entonces
						Escribir 'Ingrese el valor del perimetro de menor base'
						Leer perimetroMenor
						Si (perimetroMenor>0) Entonces
							Escribir 'Ingrese la apotema de la piramide'
							Leer apotemaPiramide
							Si (apotemaPiramide>0) Entonces
								areaLateral <- ((perimetroMayor+perimetroMenor)/2)*apotemaPiramide
								Escribir 'El area lateral del tronco de la piramide es de: ',areaLateral
							SiNo
								Escribir 'Valor no valido'
							FinSi
						SiNo
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'El valor que usted ingreso es incorrecto'
					FinSi
				2:
					// Area Total
					Escribir 'Ingrese el valor del area lateral'
					Leer areaLateral
					Si (areaLateral>=0) Entonces
						Escribir 'Ingrese el area base mayor'
						Leer areaMayor
						Escribir 'Ingrese el area base menor'
						Leer areaMenor
						areaTotal <- areaLateral+areaMayor+areaMenor
						Escribir 'El area total del tronco de piramide es de: ',areaTotal
					SiNo
						Escribir 'El valor que usted ingreso es incorrecto'
					FinSi
				3:
					// Volumen.
					Escribir 'Ingrese el valor de la altura'
					Leer altura
					Si (altura>0) Entonces
						Escribir 'Ingrese el area base mayor'
						Leer areaMayor
						Si areaMayor>0 Entonces
							Escribir 'Ingrese el area base menor'
							Leer areaMenor
							Si areaMenor>0 Entonces
								volumen <- (1/3)*altura*((areaMayor+areaMenor)+raiz(areaMayor*areaMenor))
								Escribir 'El volumen del tronco de piramide es de: ',volumen
							SiNo
								Escribir 'Valor no valido'
							FinSi
							Escribir 'Valor no valido'
						FinSi
					SiNo
						Escribir 'El valor que usted ingreso es incorrecto'
					FinSi
			FinSegun
		8:
			// Tetraedro
			// Variables
			Definir artista,areaTotal,volumen Como Real
			// Proceso 
			// Area total y volumen
			Escribir 'Calculo de Tetraedro ingrese esta variable solamente'
			Escribir 'Ingrese la medida de la aristas'
			Leer lados
			Si (lados>0) Entonces
				areaTotal <- (artista^2)*raiz(3)
				Escribir 'El area total del tetraedro es de: ',areaTotal
				volumen <- (raiz(2)/12)*artista^3
				Escribir 'El volumen del tetraedro es de: ',volumen
			SiNo
				Escribir 'El valor que ingreso no es aceptado'
			FinSi
			Escribir 'Gracias por utilizar nuestros cervicios'
		9:
			// hexaedro
			Escribir 'Calculo de Hexaedro ingrese esta variable'
			Definir volumen,area,arista Como Real
			Escribir 'Ingrese el valor de la arista'
			Leer arista
			Si (arista>0) Entonces
				area <- 6* (arista^2)
				volumen <- arista^3
				Escribir 'El area del hexaedro es de: ',area
				Escribir 'El volumen del hexaedro es de: ',volumen
			SiNo
				Escribir 'El valor que usted ingreso no es valido para el sistma'
			FinSi
		10:
			// Octaedro
			// Variables
			Definir arista,area,volumen Como Real
			Escribir 'Calculo de Octaedro ingrese esta variable'
			Escribir 'Ingrese el valor de la arista'
			Leer arista
			Si (arista>0) Entonces
				area <- 2*(arista^2)*raiz(3)
				volumen <- (raiz(2)/3)*arista^3
				Escribir 'El area del octaedro es de: ',area
				Escribir 'El volumen del octaedro es de: ',volumen
			SiNo
				Escribir 'El valor que usted ingreso no es valido'
			FinSi
		11:
			// Icosaedro
			// Variables
			Definir area,volumen,arista Como Real
			// Proceso 
			Escribir 'Calculo de Icosaedro ingrese esta variable'
			Escribir 'Ingrese el valor de la arista'
			Leer arista
			Si (arista>0) Entonces
				volumen <- (5/12)*(3+raiz(5))*arista^3
				area <- 5*arista^2*raiz(3)
				Escribir 'El area del icosaedro es de: ',area
				Escribir 'El volumen del icosaedro es de: ',volumen
			SiNo
				Escribir 'El valor que usted ingreso no es valido para el sistema'
			FinSi
	FinSegun
	
	Escribir 'Gracias por utilizar nuestros servicios <3'
FinAlgoritmo
