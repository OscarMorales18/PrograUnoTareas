Algoritmo par_o_impar
	
	Repetir
		
		Escribir '';
		Escribir 'Comprobación del número si es par o impar';
		Escribir '';
		
		Escribir 'Ingrese un número: ';
		Leer a;
		compro <- (a)%2;
		
		Si compro=0 Entonces
			Escribir '';
			Escribir 'El número ingresado es par';
			Escribir '';
		SiNo
			Escribir '';
			Escribir 'El número ingresado es impar';
			Escribir '';
		Fin Si
		
		Escribir 'Desea repetir el proceso s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
