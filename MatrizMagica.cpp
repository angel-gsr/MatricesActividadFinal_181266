#include <stdio.h>

#define n 3


void imprimirMatriz(int matriz[n][n]) 
{
    for (int i = 0; i < n; ++i) 
	{
        for (int j = 0; j < n; ++j) 
		{
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


int Verifica(int matriz[n][n]) 
{
    int sumaFila = 0; //suma primer fila
    for (int j = 0; j < n; ++j) 
	{
        sumaFila += matriz[0][j];
    }

    for (int i = 1; i < n; ++i) //suma de filas
	{
        int sumaActual = 0;
        for (int j = 0; j < n; ++j) 
		{
            sumaActual += matriz[i][j];
        }
        if (sumaActual != sumaFila) 
		{
            return 0;
        }
    }

  
    for (int j = 0; j < n; ++j) 
	{
        int sumaColumna = 0;
        for (int i = 0; i < n; ++i) 
		{
            sumaColumna += matriz[i][j];
        }
        if (sumaColumna != sumaFila) 
		{
            return 0; //no
        }
    }


    int SumaDiag = 0; //diagonal
    for (int i = 0; i < n; ++i) 
	{
        SumaDiag += matriz[i][i];
    }
    if (SumaDiag != sumaFila) 
	{
        return 0; //no
    }

    
    int SumaDiagSec = 0; //diagonal sec(inversa)
    for (int i = 0; i < n; ++i) 
	{
        SumaDiagSec += matriz[i][n - 1 - i];
    }
    if (SumaDiagSec != sumaFila) 
	{
        return 0; //no
    }

    return 1; //indica que lo es
}

int main() 
{
    int matriz[n][n];
    
    printf("Ingresa los elementos de la matriz 3x3:\n");
    for (int i = 0; i < n; ++i) 
	{
        for (int j = 0; j < n; ++j) 
		{
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    imprimirMatriz(matriz);
	//verifica
    if (Verifica(matriz)) //dependiendo del valor porque solo son comparaciones
	{
        printf("\nLa matriz SI es magica.\n");
    } 
	else 
	{
        printf("\nLa matriz NO es magica.\n");
    }

    return 0;
}

