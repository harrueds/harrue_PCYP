#include <stdio.h>
#include <math.h>
int main()
{
    int oo, z, w, a, b, c, u, f[3][3], t[3][3], r[3][3], i, j;
    float c1, cc, h;
    printf("HOLA, ESTE ES UN PROGRAMA EL CUAL HACE LAS SIGUIENTES FUNCIONES EN BASE A LA ELECCIÓN DEL GAMERRRR\033");
    printf("\n\nescoja una de las siguientes options:\n1.sumar dos números\n2.¿número es par?\n3.calculación de cateto o hipotenusa\n4.sumación de matrices 3x3\n5.prefiero irme, soy parte de un sistema capitalista, el cual...\n===>:");
    scanf("%i", &oo);
    switch (oo)
    {
    case 1:
        printf("\ningrese el primer número:");
        scanf("%i", &a);
        printf("\ningrese el segundo número:");
        scanf("%i", &b);
        c = a + b;
        printf("\nla suma %i+%i da: %i\n", a, b, c);
        break;
    case 2:
        printf("\ningrese el número:");
        scanf("%i", &u);
        if (u % 2 != 0)
        {
            printf("\nno es par rey xd");
        }
        else
        {
            printf("\nes par papu");
        }
        break;
    case 3:
        printf("\nelija cuál desea hacer:\n1.cateto\n2.hipotenusa\n|--->:");
        scanf("%i", &w);
        switch (w)
        {
        case 1:
            printf("\nEl Cateto debe ser menor que la Hipotenusa\nAmbos deben de ser positivos también papu");
            do
            {
                printf("\ningrese la Hipotenusa:");
                scanf("%f", &h);
            } while (h <= 0 || h < c1);
            do
            {
                printf("\ningrese el Cateto: ");
                scanf("%f", &c1);
            } while (c1 <= 0 || c1 > h);
            cc = sqrt(h * h - c1 * c1);
            printf("\nEL CATETO ES IGUAL A:%.2lf\n", cc);
            break;
        case 2:
            printf("\nLos Catetos deber ser positivos rey");
            do
            {
                printf("\ningrese el c1:");
                scanf("%f", &c1);
            } while (c1 <= 0);
            do
            {
                printf("\ningrese el c2:");
                scanf("%f", &cc);
            } while (cc <= 0);
            h = sqrt(c1 * c1 + cc * cc);
            printf("\nla HIPOTENUSA ES IGUAL A:%.2lf\n", h);
            break;
        default:
            printf("\nERROR 4349-0000");
            return 0;
            break;
        }
        break;
    case 4:
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("\ningrese los elementos de la matriz[%d][%d]:\n ", i, j);
                scanf("%d", &f[i][j]);
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("\ningrese los elementos de la segunda matriz[%d][%d]:\n ", i, j);
                scanf("%d", &t[i][j]);
            }
        }
        printf("la matriz naciente tras la suma:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                r[i][j] = f[i][j] + t[i][j];
                printf("%d\t", r[i][j]);
            }
            printf("\n");
        }
        break;
    case 5:
        return 0;
        break;
    default:
        printf("huevon, cómo va a tener otras opciones si de por si no se muestran xd");
        return 0;
        break;
    }
    printf("\n\nahora, escoja una de las siguientes options nuevamente, si desea (°□°):\n1.sumar dos números\n2.¿número es par?\n3.calculación de cateto o hipotenusa\n4.sumación de matrices 3x3\n5.ff, surrender\n===>:");
    scanf("%i", &oo);
    do
    {
        switch (oo)
        {
        case 1:
            printf("\ningrese el primer número:");
            scanf("%i", &a);
            printf("\ningrese el segundo número:");
            scanf("%i", &b);
            c = a + b;
            printf("\nla suma %i+%i da: %i\n", a, b, c);
            break;
        case 2:
            printf("\ningrese el número:");
            scanf("%i", &u);
            if (u % 2 != 0)
            {
                printf("\nno es par rey xd");
            }
            else
            {
                printf("\nes par papu");
            }
            break;
        case 3:
            printf("\nelija cuál desea hacer:\n1.cateto\n2.hipotenusa\n|--->:");
            scanf("%i", &w);
            switch (w)
            {
            case 1:
                printf("\nEl Cateto debe ser menor que la Hipotenusa\nAmbos deben de ser positivos también papu");
                do
                {
                    printf("\ningrese la Hipotenusa:");
                    scanf("%f", &h);
                } while (h <= 0 || h < c1);
                do
                {
                    printf("\ningrese el Cateto: ");
                    scanf("%f", &c1);
                } while (c1 <= 0 || c1 > h);
                cc = sqrt(h * h - c1 * c1);
                printf("\nEL CATETO ES IGUAL A:%.2lf\n", cc);
                break;
            case 2:
                printf("\nLos Catetos deber ser positivos rey");
                do
                {
                    printf("\ningrese el c1:");
                    scanf("%f", &c1);
                } while (c1 <= 0);
                do
                {
                    printf("\ningrese el c2:");
                    scanf("%f", &cc);
                } while (cc <= 0);
                h = sqrt(c1 * c1 + cc * cc);
                printf("\nla HIPOTENUSA ES IGUAL A:%.2lf\n", h);
                break;
            default:
                printf("\nERROR 4349-0000");
                return 0;
                break;
            }
            break;
        case 4:
            printf("\ningrese los elementos de la matriz[%d][%d]:\n ", i, j);
            scanf("%d", &f[i][j]);
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                }
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf("\ningrese los elementos de la segunda matriz[%d][%d]:\n ", i, j);
                    scanf("%d", &t[i][j]);
                }
            }
            printf("la matriz naciente de la suma es:\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    r[i][j] = f[i][j] + t[i][j];
                    printf("%d\t", r[i][j]);
                }
                printf("\n");
            }
            break;
        case 5:
            return 0;
            break;
        default:
            printf("huevon, cómo va a tener otras opciones si de por si no se muestran xd");
            return 0;
            break;
        }
    } while (oo < 6 || oo > 6);
    return 0;
}