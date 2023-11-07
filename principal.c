#include <stdio.h>
#include <stdbool.h>
#include "funciones.h";

int main()
{
	system("clear");
	int operacion;
	int operando1;
	int operando2;
	float resultado;
	bool salir = false;
	while(!salir)
	{
		printf("-----------------------------------\n");
    		printf("------------OPERACIONES------------\n");
   	 	printf("1.- sumar\n2.- restar\n3.- multiplicar\n4.- dividir\n5.- salir\n");
    		printf("Código de operación: ");
    		scanf("%d", &operacion);
		if (operacion == 5)
		{
			salir = true;
			continue;
		}
    		printf("\nOperando 1: ");
    		scanf("%d", &operando1);
   	 	printf("\nOperando 2: ");
    		scanf("%d", &operando2);
		if (operacion == 1)
		{
			resultado = sumar(operando1, operando2);
		}
		else if (operacion == 2)
		{
			resultado = restar(operando1, operando2);
		}
		else if (operacion == 3)
		{
			resultado = multiplicar(operando1, operando2);
		}
		else if (operacion == 4)
		{
			resultado = dividir(operando1, operando2);
		}
		else
		{
			system("clear");
			printf("\nerror: codigo de operacion incorrecto");
			continue;
		}
		system("clear");
		printf("resultado: %f\n", resultado);
	}
}
