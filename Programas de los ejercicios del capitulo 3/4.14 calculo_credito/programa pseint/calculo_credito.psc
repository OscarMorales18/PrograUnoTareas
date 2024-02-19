Algoritmo calculo_credito
	
	//Titulo correspondiente
	Escribir '';
	Escribir '               Limite de credito';
	Escribir '';
	
	res=1;
	
	//While para comprobar si x es -1
	Mientras res=1 Hacer
		//Peticion de variables
		Escribir 'Ingrese el numero de cuenta (-1 para salir): ';
		leer v;
		Escribir 'Ingrese el saldo inicial: ';
		leer w;
		Escribir 'Ingrese los cargos totales:  ';
		leer x;
		Escribir 'Ingrese los creditos totales: ';
		leer p;
		Escribir 'Ingrese el limite de credito: ';
		leer z;
		
		suma=w+p;
		//Calculos para comprobar si la suma es mayor al credito
		Si suma>z Entonces
			
			//Muestra de resultado
			Escribir '';
			Escribir 'El nuevo saldo es: ', suma;
			Escribir 'Cuenta: ', v;
			Escribir 'Limite de credito: ', z;
			Escribir 'Saldo: ', suma;
			Escribir 'Se excedio el limite de su credito';
			Escribir '';
			
		SiNo
			Si suma<z Entonces
				
				Escribir 'El nuevo saldo es: ', suma;
				
			SiNo
				res = res + 1;
			Fin Si
		Fin Si
	Fin Mientras

	
FinAlgoritmo
