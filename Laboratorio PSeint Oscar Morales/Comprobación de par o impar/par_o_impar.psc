Algoritmo par_o_impar
	
	Repetir
		
		Escribir '';
		Escribir 'Comprobaci�n del n�mero si es par o impar';
		Escribir '';
		
		Escribir 'Ingrese un n�mero: ';
		Leer a;
		compro <- (a)%2;
		
		Si compro=0 Entonces
			Escribir '';
			Escribir 'El n�mero ingresado es par';
			Escribir '';
		SiNo
			Escribir '';
			Escribir 'El n�mero ingresado es impar';
			Escribir '';
		Fin Si
		
		Escribir 'Desea repetir el proceso s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
