Algoritmo area_y_perimetro
	
	Repetir
		
		Escribir '';
		Escribir 'C�lculo del �rea y perimetro de un circulo';
		Escribir '';
		
		Escribir 'Ingrese el radio del c�rculo: ';
		Leer r;
		area <- (3.1416)*(r)^2;
		peri <- 2*(3.1416)*r;
		Escribir '';
		Escribir 'El �rea del c�rculo es: ', area;
		Escribir 'El per�metro del c�rculo es: ', peri;
		Escribir '';
		Escribir 'Desea repetir el proceso s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
