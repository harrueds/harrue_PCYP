#include <stdio.h>
#include <math.h>

int main(){
int a,i;
float final=1.1,hola=0;
printf("\nIngrese la cantidad de años\nAños: ");
scanf("%i",&a);
for(i=0;i<a;i++){
final=final*pow(1.1,i);
}
final=72*final;
printf("\ndespues de %i años, hay %.2f en su AFP\n\n",a,final);
}