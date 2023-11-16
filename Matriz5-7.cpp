#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define fila 5
#define column 7

void Matriz(int matriz[fila][column]) 
{
    srand(time(NULL));
    for (int i=0;i<fila;++i) 
	{
        for (int j=0;j<column;++j) 
		{
            matriz[i][j]=rand() % (9-1+1)+1; // Números aleatorios del 0 al 9
        }
    }
}

void imprimirMatriz(int matriz[fila][column]) 
{
    for (int i=0;i<fila;++i) 
	{
        for (int j=0;j<column;++j) 
		{
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int SumaDiagPrinc(int matriz[fila][column]) 
{
    int suma=0;
    for (int i=0;i<fila && i<column;++i) 
	{
        suma+=matriz[i][i];
    }
    return suma;
}

int SumaFila1(int matriz[fila][column]) 
{
    int suma = 0;
    for (int j = 0; j < column; ++j) 
	{
        suma += matriz[0][j];
    }
    return suma;
}

int SumaFila2(int matriz[fila][column]) 
{
    int suma = 0;
    for (int j = 0; j < column; ++j) 
	{
        suma += matriz[1][j];
    }
    return suma;
}

int SumaFila3(int matriz[fila][column]) 
{
    int suma = 0;
    for (int j = 0; j < column; ++j) 
	{
        suma += matriz[2][j];
    }
    return suma;
}

int SumaFila4(int matriz[fila][column]) 
{
    int suma = 0;
    for (int j = 0; j < column; ++j) 
	{
        suma += matriz[3][j];
    }
    return suma;
}

int SumaFila5(int matriz[fila][column]) 
{
    int suma = 0;
    for (int j = 0; j < column; ++j) 
	{
        suma += matriz[4][j];
    }
    return suma;
}

int SumaColumna2(int matriz[fila][column]) 
{
    int suma = 0;
    for (int i = 0; i < fila; ++i) 
	{
        suma += matriz[i][1];
    }
    return suma;
}

int SumaColumna4(int matriz[fila][column]) 
{
    int suma = 0;
    for (int i = 0; i < fila; ++i) 
	{
        suma += matriz[i][3];
    }
    return suma;
}

int SumaColumna6(int matriz[fila][column]) 
{
    int suma = 0;
    for (int i = 0; i < fila; ++i) 
	{
        suma += matriz[i][5];
    }
    return suma;
}

int SumaColumna7(int matriz[fila][column]) 
{
    int suma = 0;
    for (int i = 0; i < fila; ++i) 
	{
        suma += matriz[i][6];
    }
    return suma;
}

int SumaFilaPar(int matriz[fila][column]) 
{
    int suma = 0;
    for (int i = 0; i < fila; i += 2) 
	{
        for (int j = 0; j < column; ++j) 
		{
            suma += matriz[i][j];
        }
    }
    return suma;
}

int SumaColumnaImpar(int matriz[fila][column]) 
{
    int suma = 0;
    for (int j = 1; j < column; j += 2) 
	{
        for (int i = 0; i < fila; ++i) 
		{
            suma += matriz[i][j];
        }
    }
    return suma;
}

int SumaTriSupDiag(int matriz[fila][column]) 
{
    int suma = 0;
    for (int i = 0; i < fila; ++i) 
	{
        for (int j = i; j < column; ++j) 
		{
            suma += matriz[i][j];
        }
    }
    return suma;
}

int SumaTriInfDiag(int matriz[fila][column]) 
{
    int suma = 0;
    for (int i = 0; i < fila; ++i) 
	{
        for (int j = 0; j <= i; ++j) 
		{
            suma += matriz[i][j];
        }
    }
    return suma;
}

int main() 
{
    int matriz[fila][column];

    Matriz(matriz); //generar
    printf("Matriz original:\n");
    imprimirMatriz(matriz); //imprimir

    printf("\nSuma de la Diagonal: %d\n", SumaDiagPrinc(matriz));
    printf("Suma de la Fila 1: %d\n", SumaFila1(matriz));
    printf("Suma de la Columna 7: %d\n", SumaColumna7(matriz));
    printf("\n---------------------------------------------\n");
    printf("Suma de la Fila 1: %d\n", SumaFila1(matriz));
    //printf("Suma de la Fila 2: %d\n", SumaFila2(matriz));
    printf("Suma de la Fila 3: %d\n", SumaFila3(matriz));
    //printf("Suma de la Fila 4: %d\n", SumaFila4(matriz));
    printf("Suma de la Fila 5: %d\n", SumaFila5(matriz));
    printf("Suma de las Fila Pares: %d\n", SumaFilaPar(matriz));
    printf("\n---------------------------------------------\n");
    printf("Suma de la Columna 2: %d\n", SumaColumna2(matriz));
    printf("Suma de la Columna 4: %d\n", SumaColumna4(matriz));
    printf("Suma de la Columna 6: %d\n", SumaColumna6(matriz));
    printf("Suma de las Columnas Impares: %d\n", SumaColumnaImpar(matriz));
    printf("\n---------------------------------------------\n");
    printf("\nSuma de la Diagonal: %d\n", SumaDiagPrinc(matriz));
    printf("Suma del Triangular Superior y Diagonal Principal: %d\n", SumaTriSupDiag(matriz));
    printf("\n---------------------------------------------\n");
    printf("\nSuma de la Diagonal: %d\n", SumaDiagPrinc(matriz));
    printf("Suma del Triangular Inferior y Diagonal Principal: %d\n", SumaTriInfDiag(matriz));

    return 0;
}

