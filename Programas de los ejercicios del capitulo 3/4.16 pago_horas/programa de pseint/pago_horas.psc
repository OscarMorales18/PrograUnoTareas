Algoritmo pago_horas
	
	//Titulo correspondiente
	Escribir '';
	Escribir '               Pago de horas';
	Escribir '';
	
	res = 1;
	s = 0;
	
	//While para comprobar si x es -1
	Mientras res=1 Hacer
		//Peticion de variables
		Escribir 'Ingrese las horas trabajadas (-1 para salir): ';
		leer x;
		Escribir 'Ingrese la tarifa  por hora del empleado ($00.00): ';
		leer z;
		
		//Calculos para comprobar si es x es mayor o menor a 10
		Si x<40 y x>0 Entonces
			s = x * z;
		SiNo
			Si x>40 Entonces
				r = x - 40;
				nx = x - r;
				e = (z/2) + z;
				s = (nx * z) + ( r * e );
			SiNo
				res = res + 1;
			Fin Si
		Fin Si
	Fin Mientras
	
	//Muestra de resultado
	Escribir 'El salario es: ', s;
	
FinAlgoritmo
