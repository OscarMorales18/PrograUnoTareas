Algoritmo mayor_o_menor
	
	Repetir
		
		Escribir '';
		Escribir 'Comparación entre mayor y menor';
		Escribir '';
		
		Escribir 'Ingrese primer número: ';
		Leer a;
		Escribir 'Ingrese segunso número: ';
		Leer b;
		
		Si a=b Entonces
			Escribir '';
			Escribir 'Los números ingresados son los mismos';
			Escribir '';
		SiNo
			
			Si a>b Entonces
				Escribir '';
				Escribir 'El número ',a,' es mayor que el número ',b;
				Escribir '';
			SiNo
				Escribir '';
				Escribir 'El número ',b,' es mayor que el número ',a;
				Escribir '';
				
			Fin Si
		Fin Si
		
		Escribir 'Desea repetir el proceso s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
