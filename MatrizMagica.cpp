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

int SumaFila1(int matriz[n][n]) 
{
    int suma = 0;
    for (int j = 0; j < n; ++j) 
	{
        suma += matriz[0][j];
    }
    return suma;
}
int SumaFila2(int matriz[n][n]) 
{
    int suma = 0;
    for (int j = 0; j < n; ++j) 
	{
        suma += matriz[1][j];
    }
    return suma;
}
int SumaFila3(int matriz[n][n]) 
{
    int suma = 0;
    for (int j = 0; j < n; ++j) 
	{
        suma += matriz[2][j];
    }
    return suma;
}

int SumaColumna1(int matriz[n][n]) 
{
    int suma = 0;
    for (int i = 0; i < n; ++i) 
	{
        suma += matriz[i][0];
    }
    return suma;
}
int SumaColumna2(int matriz[n][n]) 
{
    int suma = 0;
    for (int i = 0; i < n; ++i) 
	{
        suma += matriz[i][1];
    }
    return suma;
}
int SumaColumna3(int matriz[n][n]) 
{
    int suma = 0;
    for (int i = 0; i < n; ++i) 
	{
        suma += matriz[i][2];
    }
    return suma;
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
    
    printf("Ingresa los elementos de la matriz 3x3:\n\n");
    for (int i = 0; i < n; ++i) 
	{
        for (int j = 0; j < n; ++j) 
		{
			printf("Posicion(%d,%d):",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    imprimirMatriz(matriz);
    
	//verifica
	printf("\n---------------------------------------------\n");
	printf("Suma de la Fila 1: %d\n", SumaFila1(matriz));
	printf("Suma de la Fila 2: %d\n", SumaFila2(matriz));
	printf("Suma de la Fila 3: %d\n", SumaFila3(matriz));
	printf("\n---------------------------------------------\n");
	printf("Suma de la Columna 1: %d\n", SumaColumna1(matriz));
	printf("Suma de la Columna 2: %d\n", SumaColumna2(matriz));
	printf("Suma de la Columna 3: %d\n", SumaColumna3(matriz));
	
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
