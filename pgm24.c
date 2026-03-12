// Write a program for finding the product of two matrices. Write separate functions for
// Reading matrices, Multiplication of matrices and Displaying matrix.

#include <stdio.h>

void storeMatrix(int *m, int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i * c + j]);
}

void matrixMultiply(int *m1, int r1, int c1, int *m2, int r2, int c2, int *m3)
{
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
        {
            m3[i * c2 + j] = 0;
            for (int k = 0; k < c1; k++)
                m3[i * c2 + j] += m1[i * c1 + k] * m2[k * c2 + j];
        }
}

void displayMatrix(int *m, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", m[i * c + j]);
        printf("\n");
    }
}

int main()
{
    int r1, c1, r2, c2;
    int matA[20][20], matB[20][20], matC[20][20];

    printf("ENTER THE ROWS AND COLS OF MATRIX A \n");
    scanf("%d %d", &r1, &c1);

    printf("\nENTER THE ROWS AND COLS OF MATRIX B \n");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("MATRIX MULTIPLICATION NOT POSSIBLE!!!!\n");
        return 0;
    }

    printf("ENTER THE ELEMNTS IN MATRIX A\n");
    storeMatrix(&matA[0][0], r1, c1);

    printf("ENTER THE ELEMNTS IN MATRIX B\n");
    storeMatrix(&matB[0][0], r2, c2);

    matrixMultiply(&matA[0][0], r1, c1, &matB[0][0], r2, c2, &matC[0][0]);

    displayMatrix(&matC[0][0], r1, c2);

    return 0;
}