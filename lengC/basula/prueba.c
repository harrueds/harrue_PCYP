#include <stdio.h>
int main()
{
    int matriz[4][4], fila, col;
    printf("Ingresa los elementos de la matriz 4x4: \n");
    for(fila=0;fila<4;fila++)
    {
        for(col=0;col<4;col++)
        {
            scanf("%i",&matriz[fila][col]);
        }
    }
    printf("\nLa matriz ingresada es:\n");
        for(fila=0;fila<4;fila++)
    {
        for(col=0;col<4;col++)
        {
            printf("%i\t",matriz[fila][col]);
        }
        printf("\n");
    }
    return 0;
}
