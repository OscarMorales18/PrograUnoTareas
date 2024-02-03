Algoritmo salario_semenal
	
	Repetir
		
		Escribir '';
		Escribir 'Calculo del salario semanal';
		Escribir '';
		
		Escribir 'Escriba el nombre del empleado: ';
		Leer nom;
		Escribir 'Ingrese cuanto dinero gana al mes: ';
		Leer a;
		sema <- ((a)/30)*7;
		Escribir '';
		Escribir 'El salario semanal de ', nom , ' es de: ', sema;
		Escribir '';
		Escribir 'Desea repetir el proceso s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='n' O res='N'
	
FinAlgoritmo
