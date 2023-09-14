#include <stdio.h>
#include <stdlib.h>

// Función para convertir decimal a binario
int* decimalToBinary(int num, int* size) {
    // Calcula el número de dígitos binarios requeridos
    int temp = num;
    int count = 0;
    while (temp != 0) {
        temp /= 2;
        count++;
    }
    
    // Crea un arreglo dinámico para almacenar los dígitos binarios
    int* binaryArray = (int*)malloc(count * sizeof(int));
    
    // Almacena los dígitos binarios en el arreglo
    int i = 0;
    while (num != 0) {
        binaryArray[i] = num % 2;
        num /= 2;
        i++;
    }
    
    // Actualiza el tamaño del arreglo
    *size = count;
    
    // Retorna el arreglo de dígitos binarios
    return binaryArray;
}

int main() {
    int num;
    printf("Ingrese un número decimal: ");
    scanf("%d", &num);
    
    int size;
    int* binaryArray = decimalToBinary(num, &size);
    
    printf("El número binario correspondiente es: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", binaryArray[i]);
    }
    printf("\n");
    
    // Liberar la memoria asignada al arreglo dinámico
    free(binaryArray);
    
    return 0;
}
