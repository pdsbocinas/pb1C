#include <stdio.h>
#include <stdlib.h>

int main(){
	char letra='n';

	do
	{
		printf("Ingrese letra: \n");
		scanf("%c",&letra);
		fflush(stdin);

	}while((letra!='s')&&(letra!='S'));

	return 0;

}