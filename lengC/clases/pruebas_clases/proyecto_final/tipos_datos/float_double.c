#include <stdio.h>
int main()
{
    float a;
    double b;
    printf("Ingrese un decimal:\nnum1: ");
    scanf("%f", &a);
    printf("\nIngrese otro decimal:\nnum2: ");
    scanf("%d", b);
    printf("\n\nLos números son:\nnum1=%.4f\t%d\n\n", a, b);
    return 0;
}