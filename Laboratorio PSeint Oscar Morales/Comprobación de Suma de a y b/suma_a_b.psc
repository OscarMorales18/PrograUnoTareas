Algoritmo suma_a
	
	Repetir
		
		Escribir '';
		Escribir "Comprobación del resultado de la suma";
		Escribir '';
		
		Escribir 'Ingrese primer número: ';
		Leer a;
		Escribir 'Ingrese segunso número: ';
		Leer b;
		suma <- (a+b);
		Escribir "";
		Escribir 'La suma de los dos números es: ', suma;
		
		Si suma=0 Entonces
			Escribir "La suma de los números da como resultado el 0";
		SiNo
			Si suma>0 Entonces
				Escribir "La suma de los números da como resultado un número positivo";
			SiNo
				Escribir "La suma de los números da como resultado un número negativo";
			Fin Si
		Fin Si
		
		Escribir '';
		Escribir 'Desea repetir la suma s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
