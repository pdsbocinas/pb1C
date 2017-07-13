#include <stdio.h>
void modificar(int *variable);
int main()
{
int i = 1;
printf("\n i=%d antes de llamar a la función modificar", i);
modificar(&i);
printf("\n i=%d después de llamar a la función modificar", i);
return 0;
}
void modificar(int *variable)
{
printf("\nvariable = %d dentro de modificar", *variable);
*variable = 9;
printf("\nvariable = %d dentro de modificar", *variable);

int *a,*b;
if (a<b){
 printf(“a apunta a una dirección más baja que b”);
}
}