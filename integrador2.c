/*Una pequeña entidad financiera de 100 clientes numerados de 1 a 100. Por cada transacción se registra:
	N° de cliente
	Código de transacción:	
		1. Depósito
		2. Extracción
		3. Comisiones deducidas
		4. Intereses acreditados
		5. Monto de la operación
	No se conoce la cantidad de transacciones que se realizan. Se desea:

	•	Emitir un listado con la siguiente información:

N° De Cliente
XXX
Total Depósitos
XXXXX.XX
Total Extracciones
XXXXX.XX
Total Comisiones
XXXXX.XX
Total Intereses
XXXXX.XX
Saldo
XXXXX.XX


	•	Indicar cuál fue el cliente con mayor cantidad depositada y cual fue esa cantidad. Se debe mostrar si hay más de un cliente con el depósito máximo.*/

#include <stdio.h>
#include <stdlib.h>

#define FILA 1
#define COL 5

int main()
{
	int i=0,j=0,into=0,nCLi=0;
	int matriz[FILA][COL];

	printf("Quiere cargar una transaccion: 1.SI 2.NO");
	scanf("%i",&into);

	if(into == 1)
	{
		for(i=0;i<FILA;i++){
			
			for (j=0;j<COL;j++)
			{
				printf("Ingrese numero de cliente: ");
				scanf("%i",&matriz[i][j]);

				printf("Ingrese total de depositos del cliente: ");
				scanf("%i",&matriz[i][j]);
			}
		}

		for(i=0;i<FILA;i++){
			
			for (j=0;j<COL;j++)
			{
				printf("%i",matriz[i][j]);
			}

			printf("\n");
		}


	}else if(into == 2)
	{
		printf("Adios");
	}else{
		printf("Error\n");
	}

	return 0;
}


