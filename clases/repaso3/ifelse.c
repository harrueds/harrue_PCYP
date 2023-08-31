#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    float r;
    for (a = 12; a > 1; a--)
    {
        printf("\nVoy en el %i\n", a * a);
    }
    printf("\n\n");
    r=sqrt(a);
    return 0;
}