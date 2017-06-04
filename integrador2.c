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

int main()
{
	int i=0,j=0,into=0,trans=0;
	float vec[6];

	printf("Que operación desea realizar: \n1. Deposito\n2.Extraccion\n3.Comision\n4.Intereses\n\n");
	scanf("%i",&trans);
		
	switch(trans)
	{
		case 1:
			printf("Nro de cliente: ");
			scanf("%f",&vec[0]);

			printf("Cantidad a depositar: ");
			scanf("%f",&vec[1]);
		break;

		case 2:
			printf("Nro de cliente: ");
			scanf("%f",&vec[0]);

			printf("Cantidad a extraer: ");
			scanf("%f",&vec[2]);
		break;

		case 3:
			printf("Nro de cliente: ");
			scanf("%f",&vec[0]);

			printf("Comision: ");
			scanf("%f",&vec[3]);
		break;

		case 4:
			printf("Nro de cliente: ");
			scanf("%f",&vec[0]);

			printf("Intereses: ");
			scanf("%f",&vec[4]);
		break;
	}

	

	

	printf("El numero de cliente es %.2f \nDeposito: %.2f", vec[0],vec[1]);
	return 0;
}


