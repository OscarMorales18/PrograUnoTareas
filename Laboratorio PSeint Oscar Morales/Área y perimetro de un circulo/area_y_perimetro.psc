Algoritmo area_y_perimetro
	
	Repetir
		
		Escribir '';
		Escribir 'Cálculo del área y perimetro de un circulo';
		Escribir '';
		
		Escribir 'Ingrese el radio del círculo: ';
		Leer r;
		area <- (3.1416)*(r)^2;
		peri <- 2*(3.1416)*r;
		Escribir '';
		Escribir 'El área del círculo es: ', area;
		Escribir 'El perímetro del círculo es: ', peri;
		Escribir '';
		Escribir 'Desea repetir el proceso s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
