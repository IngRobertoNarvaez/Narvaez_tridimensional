#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int ifila;
    int jcolumna;
    int kprofundi;
    printf("Ingresar Fila i :");
    scanf("\n %d", &ifila);
    printf("Ingresar Columna j :");
    scanf("\n %d", &jcolumna);
    printf("Ingresar profundidad k :");
    scanf("\n %d", &kprofundi);
    int matriz[kprofundi][ifila][jcolumna];
    srand(time(NULL));
    return 0;
}
