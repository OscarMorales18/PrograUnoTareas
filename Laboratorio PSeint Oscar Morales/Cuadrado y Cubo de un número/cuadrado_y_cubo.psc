Algoritmo cuadrado_y_cubo
	
	Repetir
		
		Escribir '';
		Escribir 'Cuadrado y cubo de un n�mero';
		Escribir '';
		
		Escribir 'Ingrese un n�mero: ';
		Leer a;
		cua <- (a)^2;
		cubo <- (a)^3;
		Escribir '';
		Escribir 'El cuadrado de ese n�mero es: ', cua;
		Escribir 'El cubo de ese n�mero es: ', cubo;
		Escribir '';
		Escribir 'Desea repetir el proceso s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
