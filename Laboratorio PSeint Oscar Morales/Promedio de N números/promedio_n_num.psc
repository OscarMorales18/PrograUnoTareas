Algoritmo promedio_n_num
	
	Repetir
		
		Escribir '';
		Escribir 'Promedio de una cantidad de n números';
		Escribir '';
		
		Escribir 'Ingrese la cantidad de números que quiera: ';
		Leer n;
		Escribir "";
		
		tot=0;
		Para r<-1 Hasta n Con Paso 1 Hacer
			Escribir 'Ingrese un número: ';
			Leer num;
			tot<-tot+num;
		Fin Para
		
		prom<-tot/n;
		
		Escribir "";
		Escribir "El promedio total es: ", prom;
		Escribir "";
		
		Escribir 'Desea repetir el promedio s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
