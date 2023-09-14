#include <stdio.h>
#include <math.h>

int main() {
    double c1, c2, h;
    int op1, op2;
    
    do {
        do {
            printf("Ingresa qué quieres hacer:\nEncontrar la hipotenusa=1\nEncontrar el cateto=2\n:");
            scanf("%d", &op1);
        } while (op1 > 2 || op1 < 1);
        
        switch (op1) {
            case 1:
                do {
                    printf("\nIngresa los catetos del triángulo(si los valores no son posibles se pediran denuevo)\n:");
                    scanf("%lf %lf", &c1, &c2);
                } while (c1 <= 0 || c2 <= 0);
                
                h = sqrt(c1 * c1 + c2 * c2);
                printf("\nEl valor de la hipotenusa es: %.2lf", h);
                break;
            
            case 2:
                do {
                    printf("\nIngresa el cateto y la hipotenusa (en el orden mencionado y con valoresposibles)\n:");
                    scanf("%lf %lf", &c1, &h);
                } while (c1 <= 0 || h <= 0 || c1 > h);
                
                c2 = sqrt(h * h - c1 * c1);
                printf("\nEl valor del cateto es: %.2lf", c2);
                break;
                
            default:
                printf("Opción no válida");
                break;
        }
        
        printf("\n¿Quieres hacer otra operación?\n1-si\n2-no\n:");
        scanf("%d", &op2);
    } while (op2 == 1);
    
    return 0;
}
