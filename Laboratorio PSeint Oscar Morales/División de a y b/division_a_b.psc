Algoritmo division_a_b
	
	Repetir
		
		Escribir '';
		Escribir "Calcular cociente y residuo de dos números";
		Escribir '';
		
		Escribir 'Ingrese primer número: ';
		Leer a;
		Escribir 'Ingrese segunso número: ';
		Leer b;
		cociente <- (b/a);
		residuo <- (b MOD a);
		Escribir '';
		Escribir 'La cociente de la división es: ', cociente;
		Escribir 'La residuo de la división es: ', residuo;
		Escribir '';
		Escribir 'Desea repetir la division s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
