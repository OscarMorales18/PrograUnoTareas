Algoritmo division_a_b
	
	Repetir
		
		Escribir '';
		Escribir "Calcular cociente y residuo de dos n�meros";
		Escribir '';
		
		Escribir 'Ingrese primer n�mero: ';
		Leer a;
		Escribir 'Ingrese segunso n�mero: ';
		Leer b;
		cociente <- (b/a);
		residuo <- (b MOD a);
		Escribir '';
		Escribir 'La cociente de la divisi�n es: ', cociente;
		Escribir 'La residuo de la divisi�n es: ', residuo;
		Escribir '';
		Escribir 'Desea repetir la division s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
