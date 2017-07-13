#include <stdio.h>

void imparr(int *arr, int cant);

int main()
{
	int edades[]={12,22,33,44};

	imparr(edades,4);
}

void imparr(int *arr, int cant)
{
	int i=0;

	for (int i = 0; i < cant; i++)
	{
		printf("%i ",*arr);
		arr++;
	}
}