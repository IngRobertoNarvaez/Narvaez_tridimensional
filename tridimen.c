#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int ifila;
    int jcolumna;
    int kcaras;
    printf("Ingresar Fila  :");
    scanf("\n %d", &ifila);
    printf("Ingresar Columna  :");
    scanf("\n %d", &jcolumna);
    printf("Ingresar caras  :");
    scanf("\n %d", &kcaras);
    srand(time(NULL));
    int matriz[ifila][jcolumna][kcaras];
    // Se iniciara las matrices de valor
    for (int k = 0; k < kcaras; k++)
    {
        for (int i = 0; i < ifila; i++)
        {
            for (int j = 0; j < jcolumna; j++)
            {
                matriz[k][i][j] = 0;
            }
        }
    }

    return 0;
}
