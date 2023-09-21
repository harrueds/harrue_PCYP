#include<stdio.h>
int main()
{
    int fila, columna;
    float A[3][3],B[3][3],SUM[3][3];

    printf("***El siguiente programa realiza una serie de operaciones y cálculos***\n***Estos se muestran en el menú siguiente***\n\n");

    printf("\nIngrese la primera matriz:\n");
    //ESTO ES PARA INGRESAR
    for(fila=0;fila<3;fila++)
    {
        for(columna=0;columna<3;columna++)
        {
            printf("\nA[%i][%i]= ",fila+1,columna+1);
            scanf("%f",&A[fila][columna]);
        }
    }

    //ESTO ES PARA MOSTRAR
    printf("\nA=\n");
    for(fila=0;fila<3;fila++)
    {
        for(columna=0;columna<3;columna++)
        {
            printf("%.1f\t",A[fila][columna]);
        }
        printf("\n");
    }
    printf("\n\n");
}