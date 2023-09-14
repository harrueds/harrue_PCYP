int main() {
    int numero1, numero2
    
    printf("Ingrese el primer número: ");
    scanf("%d", numero1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", numero2);
    
    int suma = numero1 + numero2;
    int resta = numero1 - numero2;
    int multiplicacion = numero1 * numero2;
    int division = numero1 / numero2;
    
    printf("La suma de los números es: %d\n", suma);
    printf("La resta de los números es: %d\n", resta);
    printf("La multiplicación de los números es: %d\n", multiplicacion);
    printf("La división de los números es: %d\n", division);
    
    return 0;
}