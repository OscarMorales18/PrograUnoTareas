Algoritmo mayor_o_menor
	
	Repetir
		
		Escribir '';
		Escribir 'Comparaci�n entre mayor y menor';
		Escribir '';
		
		Escribir 'Ingrese primer n�mero: ';
		Leer a;
		Escribir 'Ingrese segunso n�mero: ';
		Leer b;
		
		Si a=b Entonces
			Escribir '';
			Escribir 'Los n�meros ingresados son los mismos';
			Escribir '';
		SiNo
			
			Si a>b Entonces
				Escribir '';
				Escribir 'El n�mero ',a,' es mayor que el n�mero ',b;
				Escribir '';
			SiNo
				Escribir '';
				Escribir 'El n�mero ',b,' es mayor que el n�mero ',a;
				Escribir '';
				
			Fin Si
		Fin Si
		
		Escribir 'Desea repetir el proceso s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
