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

#define CANTIDAD_DE_CLIENTES 2 // Filas
#define COL 6

int main()
{
	int i=0,j=0, contador=0;
	float matriz[CANTIDAD_DE_CLIENTES][COL],dep=0,extc=0,com=0,ints=0,monto=0, aux=0, auxNumeroCliente=0;
	float depositos[CANTIDAD_DE_CLIENTES], numerosDeClientes[CANTIDAD_DE_CLIENTES];
	
	for(i=0; i < CANTIDAD_DE_CLIENTES; i++)
		for(j=0; j < COL; j++)
			matriz[i][j] = 0;

	for(i = 0; i < CANTIDAD_DE_CLIENTES; i++) 
	{
		printf("Ingrese un numero de cliente: ");
		scanf("%f", &matriz[i][0]);

		printf("Ingrese un deposito: ");
		scanf("%f",&matriz[i][1]);

		printf("Ingrese una extraccion: ");
		scanf("%f",&matriz[i][2]);

		dep = matriz[i][1];
		extc = matriz[i][2];

		if(dep >= 2000)
			matriz[i][3] = dep * 0.12; // El banco le da un 12% si deposita mas de 2000 pesos.

		if(extc >= 1000)
			matriz[i][4] = extc * 0.05;

		com = matriz[i][3];
		ints = matriz[i][4];

		// Asigna el monto == matriz[i][5]
		matriz[i][5] = dep - extc + com - ints;

		depositos[i] = matriz[i][1];
		numerosDeClientes[i] = matriz[i][0];
		
		printf("\n");
		
		printf("Detalle final: \n");
		printf("\n");
		printf("Numero de cliente: %.0f \n", matriz[i][0]);
		printf("Deposito: $%.2f \n", matriz[i][1]);
		printf("Extraccion: $%.2f \n",matriz[i][2]);
		printf("Comision a favor: $%.2f \n",matriz[i][3]);
		printf("Intereses: $%.2f \n\n",matriz[i][4]);
		printf("Monto final: $%.2f \n",matriz[i][5]);

		printf("\n");
	}
		
	printf("\n");

	for (int x = 1; x < CANTIDAD_DE_CLIENTES; x++) {
		for (int y = 0; y < CANTIDAD_DE_CLIENTES - 1; y++) {
			if (depositos[y] < depositos[y + 1]) {
				auxNumeroCliente = numerosDeClientes[y];
				aux = depositos[y];
				depositos[y] = depositos[y + 1];
				numerosDeClientes[y] = numerosDeClientes[y + 1];
				depositos[y + 1] = aux;
				numerosDeClientes[y + 1] = auxNumeroCliente;
			}
		}
	}

	printf("Depositos Maximos y minimos: \n");

	for(i=0; i< CANTIDAD_DE_CLIENTES; i++)
	{
		printf("Deposito: $%.2f \n", depositos[i]);
		printf("Numero de cliente: %.0f \n", numerosDeClientes[i]);
	}

	printf("\n");

	return 0;
}