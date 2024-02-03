Algoritmo calculadora_Oscar_Morales
	
	Repetir
		Escribir '';
		Escribir 'Calculadora hecha por Oscar Morales';
		Escribir '';
		Escribir '          1. Suma';
		Escribir '          2. Resta';
		Escribir '          3. Multiplicaci�n';
		Escribir '          4. Divisi�n';
		Escribir '          5. Potencia';
		Escribir '          6. Porcentaje';
		Escribir '          7. Salir';
		Escribir '';
		Escribir 'Escriba el n�mero de opci�n que desea: ';
		Leer opcion;
		Limpiar Pantalla;
		
		Para conta<-1 Hasta 2 Con Paso 1 Hacer
			
			// C�digo de realizar una suma
			
			Si opcion=1 Entonces
				Escribir '';
				Escribir 'Escriba la primera cantidad: ';
				Leer primero;
				Escribir 'Escriba la segunda cantidad: ';
				Leer segundo;
				suma <- primero+segundo;
				Escribir '';
				Escribir '  La suma de ', primero, ' + ', segundo, ' = ', suma;
				Escribir '';
				Escribir 'Desea repetir la suma s/n? ';
				Leer r;
				Si r='n' O r='N' Entonces
					conta <- 2;
					Limpiar Pantalla;
				SiNo
					conta <- 1;
					Limpiar Pantalla;
				FinSi
			SiNo
				
				// C�digo de realizar una resta
				
				Si opcion=2 Entonces
					Escribir '';
					Escribir 'Escriba la primera cantidad: ';
					Leer primero;
					Escribir 'Escriba la segunda cantidad: ';
					Leer segundo;
					resta <- primero-segundo;
					Escribir '';
					Escribir '  La resta de ', primero, ' - ', segundo, ' = ', resta;
					Escribir '';
					Escribir 'Desea repetir la resta s/n? ';
					Leer r;
					Si r='n' O r='N' Entonces
						conta <- 2;
						Limpiar Pantalla;
					SiNo
						conta <- 1;
						Limpiar Pantalla;
					FinSi
				SiNo
					
					// C�digo de realizar una multiplicaci�n
					
					Si opcion=3 Entonces
						Escribir '';
						Escribir 'Escriba la primera cantidad: ';
						Leer primero;
						Escribir 'Escriba la segunda cantidad: ';
						Leer segundo;
						multiplicacion <- primero*segundo;
						Escribir '';
						Escribir '  La multiplicaci�n de ', primero, ' * ', segundo, ' = ', multiplicacion;
						Escribir '';
						Escribir 'Desea repetir la multiplicaci�n s/n? ';
						Leer r;
						Si r='n' O r='N' Entonces
							conta <- 2;
							Limpiar Pantalla;
						SiNo
							conta <- 1;
							Limpiar Pantalla;
						FinSi
					SiNo
						
						// C�digo de realizar una divisi�n
						
						Si opcion=4 Entonces
							Escribir '';
							Escribir 'Escriba la primera cantidad: ';
							Leer primero;
							Si primero=0 Entonces
								Repetir
									Escribir 'No es posible dividir entre 0, coloque otro valor: ';
									Leer primero;
								Hasta Que primero<>0
							FinSi
							Escribir 'Escriba la segunda cantidad: ';
							Leer segundo;
							Si segundo=0 Entonces
								Repetir
									Escribir 'No es posible dividir entre 0, coloque otro valor: ';
									Leer segundo;
								Hasta Que segundo<>0
							FinSi
							division <- primero/segundo;
							Escribir '';
							Escribir '  La divisi�n de ', primero, ' / ', segundo, ' = ', division;
							Escribir '';
							Escribir 'Desea repetir la divisi�n s/n? ';
							Leer r;
							Si r='n' O r='N' Entonces
								conta <- 2;
								Limpiar Pantalla;
							SiNo
								conta <- 1;
								Limpiar Pantalla;
							FinSi
						SiNo
							
							// C�digo de realizar una potencia
							
							Si opcion=5 Entonces
								Escribir '';
								Escribir 'Escriba la base: ';
								Leer primero;
								Escribir 'Escriba el exponente: ';
								Leer segundo;
								potencia <- primero^segundo;
								Escribir '';
								Escribir '  La potencia de base ', primero, ' del exponente ', segundo, ' = ', potencia;
								Escribir '';
								Escribir 'Desea repetir la potencia s/n? ';
								Leer r;
								Si r='n' O r='N' Entonces
									conta <- 2;
									Limpiar Pantalla;
								SiNo
									conta <- 1;
									Limpiar Pantalla;
								FinSi
							SiNo
								// C�digo de realizar un porcentaje
								
								Si opcion=6 Entonces
									Escribir '';
									Escribir 'Escriba el porcentaje a calcular (%): ';
									Leer primero;
									Escribir 'Escriba la cantidad: ';
									Leer segundo;
									suma <- (primero/100)*segundo;
									Escribir '';
									Escribir '  El ', primero, '% de ', segundo, ' = ', suma;
									Escribir '';
									Escribir 'Desea repetir el porcentaje s/n? ';
									Leer r;
									Si r='n' O r='N' Entonces
										conta <- 2;
										Limpiar Pantalla;
									SiNo
										conta <- 1;
										Limpiar Pantalla;
									FinSi
								SiNo
									Si opcion=7 Entonces
										conta <- 2;
									FinSi
									
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinPara
		
		Escribir '';
		Escribir 'Desea finalizar la calculadora s/n? ';
		Leer res;
		Limpiar Pantalla;
		
	Hasta Que res='s' O res='S'
FinAlgoritmo
