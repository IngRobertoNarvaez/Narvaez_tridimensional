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
    printf("\n");
    srand(time(NULL));
    int matriz[kcaras][ifila][jcolumna];
    // Se iniciara las matrices de valor cero
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
    // La matriz de numeros unos se iniciara aqui
    // Este fragmento de codigo establece todos los elementos de la
    // ultima matriz del arreglo tridimensional en 1 mientras que
    // todas las demas matrices se establecen en 0.
    for (int i = 0; i < ifila; i++)
    {
        for (int j = 0; j < jcolumna; j++)
        {
            matriz[kcaras - 1][i][j] = 1;
        }
    }
    // se imprime la matriz
    for (int k = 0; k < kcaras; k++)
    {
        printf("Matriz de cara %d:\n", k + 1);
        for (int i = 0; i < ifila; i++)
        {

            for (int j = 0; j < jcolumna; j++)
            {
                printf("%d ", matriz[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
