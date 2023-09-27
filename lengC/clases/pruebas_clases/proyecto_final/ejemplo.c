#include <stdio.h>
int main()
{
    int h;
    printf("Hola buen día, ¿qué desea hacer?");
    printf("\nelija su preferencia\n1-Ingresar\n2-Mostrar\n3-Nombre\n4-Rut\n5-Salir\nQuiero la número:");
    scanf("%i", &h);
    switch (h)
    {
    case 1:
        printf("termómetro");
        break;
    case 2:
        printf("osadía");
        break;
    case 3:
        printf("lanza");
        break;
    case 4:
        printf("albion online");
        break;
    case 5:
        return 0;
    }
    if (h > 5)
    {
        printf("error 2354-8343");
    }
}
