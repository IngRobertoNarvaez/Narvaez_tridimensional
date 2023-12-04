#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int ifila;
    int jcolumna;
    int kcaras;
    printf("Ingresar Fila i :");
    scanf("\n %d", &ifila);
    printf("Ingresar Columna j :");
    scanf("\n %d", &jcolumna);
    printf("Ingresar caras k :");
    scanf("\n %d", &kcaras);
    int matriz[kcaras][ifila][jcolumna];
    srand(time(NULL));

    return 0;
}
