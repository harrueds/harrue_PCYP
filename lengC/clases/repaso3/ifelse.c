#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("\nIngrese un número: ");
    scanf("%i",&a);
    if(a%2 == 0)
    {
	printf("\nEl número es par\n\n");
    }
    else
   {
        printf("\nEl número no es par\n\n");
    }
    return 0;
}
