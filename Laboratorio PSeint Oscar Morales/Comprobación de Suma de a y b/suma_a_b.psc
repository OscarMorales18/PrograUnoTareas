Algoritmo suma_a
	
	Repetir
		
		Escribir '';
		Escribir "Comprobaci�n del resultado de la suma";
		Escribir '';
		
		Escribir 'Ingrese primer n�mero: ';
		Leer a;
		Escribir 'Ingrese segunso n�mero: ';
		Leer b;
		suma <- (a+b);
		Escribir "";
		Escribir 'La suma de los dos n�meros es: ', suma;
		
		Si suma=0 Entonces
			Escribir "La suma de los n�meros da como resultado el 0";
		SiNo
			Si suma>0 Entonces
				Escribir "La suma de los n�meros da como resultado un n�mero positivo";
			SiNo
				Escribir "La suma de los n�meros da como resultado un n�mero negativo";
			Fin Si
		Fin Si
		
		Escribir '';
		Escribir 'Desea repetir la suma s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
