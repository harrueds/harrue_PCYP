#include <stdio.h>
#include <math.h>
int main()
{ 
    int op;
    float hip, cat1, cat2;
    printf("\nEste programa calcula el cateto o la hipotenusa");
    do{
    printf ("\nIngrese el numero de la operación qué quiere realizar"); 
    printf("\n1.-Calcular la hipotenusa\n2.-Calcular el Cateto\n3.-Salir\nSu opcion:");
    scanf("%i", &op);
    switch (op)
      {
    case 1:
    
    
        do{
        printf("Ingrese el primer cateto: ");
        scanf("%f",&cat1);
        if (cat1 <= 0) 
        {
        printf("El número no puede ser negativo\n");
        continue;
        }
        }while(cat1 <= 0);
        
        
        do{
            
        printf("Ingrese el segundo cateto:" );
        scanf("%f", &cat2);
        if (cat2 <= 0) 
        {
        printf("El número no puede ser negativo\n");
        continue;
        }
        }while(cat2 <= 0);
        hip=sqrt(cat1*cat1 + cat2*cat2);
        printf("La hipotenusa es: %f\n", hip);
        break; 
        
        
     case 2:
        do{
        do{
         printf("Ingrese la hipotenusa: ");
         scanf("%f", &hip);
         if (hip <= 0) 
        {
        printf("El número no puede ser negativo\n");
        continue;
        }
        }while(hip <= 0); 
         
          
         printf("Ingrese el cateto: ");
         scanf("%f", &cat1);
         if(cat1 <= 0) 
        {
        printf("El número no puede ser negativo\n");
        continue;
        }
        if (hip <= cat1) {
        printf("La hipotenusa no puede ser menor o igual al cateto\n");
        continue;
        }
        } while (cat1 <= 0 || hip <= cat1);
         
            
            cat2 = sqrt(hip*hip - cat1*cat1);
            printf("El cateto es: %f\n", cat2);
            break;
     case 3:
         printf("Salida exitosa, Muchas gracias por ocupar mi codigo :)");
            break;
            default:
            printf("Opcion invalida.\n ");
            break;
     }
    }while (op != 3);

printf("\n\n");     
 return 0;
}
