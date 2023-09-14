#include <stdio.h>

// Función para calcular el término de Fibonacci
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, i;

    printf("Ingrese el número de términos de la sucesión de Fibonacci que desea calcular: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Debe ingresar un número mayor o igual a 1.\n");
        return 1;
    }

    printf("Sucesión de Fibonacci:\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
