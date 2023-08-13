#include <stdio.h>
int main(){
float a,b,div;
printf("\nIngrese el dividendo: ");
scanf("%f",&a);
do{
    printf("\nIngrese el divisor: ");
    scanf("%f",&b);
} while(b==0);
 // El valor del divisor podría ser cero, para evitar esto se puede utilizar
//un bucle do-while para que lo haga al menos una vez
//div = a / b;
printf("\nEl resultado de la división es: %.2f\n",a/b);
return 0;
}
