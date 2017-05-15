#include <stdio.h>
  
  int main(){
	
	int i, j, resultado=0;
	
	printf("Ingrese numero del contador\n");
	scanf("%i", &j);

	for(i=0;i<j;i++)
	{
		printf("Dame un numero: \n");
		scanf("%i", &i);
		resultado = resultado + i;
	}
	
	printf("LA suma es: %d \n", resultado);
  }