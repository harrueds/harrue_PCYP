#include <stdio.h>
#include <math.h>
int main()
{
    float c1,c2,hi;
    int ele;
    printf("ESTE PROGRAMA HACE LO SIGUIENTE: \n\ncalcula el cateto o la hipotenusa en base a la elección del usuario.\n:)\n");
    printf("\n¿qué desea hacer?:\n1-calcular la hipotenusa\n2-calcular un cateto\n3-no quiero nada\n===>:");
    scanf("%i",&ele);
    switch(ele) {
    case 1:
    do{
        printf("lo ingresado debe ser positivo");
        printf("\ningrese el cateto 1:");
        scanf("%f",&c1);
    }while(c1<=0);
    do{
        printf("lo ingresado debe ser positivo");
        printf("\ningrese el cateto 2:");
        scanf("%f",&c2);
    }while(c2<=0);
    hi=sqrt(c1*c1+c2*c2);
    printf("la hipotenusa es:%.2lf\n",hi);
    break;
    case 2:
    do{
        printf("lo ingresado debe ser positivo");
    printf("\ningrese un cateto: ");
    scanf("%f",&c1);
    }while(c1<=0);
    do{
        printf("debe ser positiva y mayor al cateto");
        printf("\ningrese la hipotenusa: ");
        scanf("%f",&hi);
    }while(hi<c1 || hi<=0);
    c2=sqrt(hi*hi-c1*c1);
    printf("el segundo cateto es:%.2lf",c2);
    break;
    case 3:
    return 0;
    break;
    default:
    printf("\nesa no era una opción zopenco xd");
    break;
    }
    if(ele==1 || ele==2 || ele==3 || ele>3)
    {
    do{
    printf("\n\n¿qué desea hacer ahora?:\n1-volvera calcular la hipotenusa\n2-volver a calcular un cateto\n3-me cansé, prefiero retirarme\n===>:");
    scanf("%i",&ele);
    switch(ele) {
    case 1:
    do{
        printf("lo ingresado debe ser positivo");
        printf("\ningrese el cateto 1:");
        scanf("%f",&c1);
    }while(c1<=0);
    do{
        printf("lo ingresado debe ser positivo");
        printf("\ningrese el cateto 2:");
        scanf("%f",&c2);
    }while(c2<=0);
    hi=sqrt(c1*c1+c2*c2);
    printf("\nla hipotenusa es:%.2lf\n",hi);
    break;
    case 2:
    do{
        printf("lo ingresado debe ser positivo");
    printf("\n\ningrese un cateto: ");
    scanf("%f",&c1);
    }while(c1<=0);
    do{
        printf("debe ser positiva y mayor al cateto");
        printf("\ningrese la hipotenusa: ");
        scanf("%f",&hi);
    }while(hi<c1 || hi<=0);
    c2=sqrt(hi*hi-c1*c1);
    printf("\nel segundo cateto es:%.2lf",c2);
    break;
    case 3:
    return 0;
    break;
    default:
    printf("\n\nesa no era una opción zopenco xd");
    break;
    }
    }while(ele==1 || ele==2 || ele==3 || ele>3 || ele<0);
    }
    
  return 0;   
}
