// Write a function for checking whether a positive integer number is prime or not. Using this
// function display the prime numbers in a mxn matrix.

#include <stdio.h>

int isPrime(int n)
{

    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;

    return 1;
}
int main()
{
    int mat[20][20], i, j, m, n;
    printf("ENTR THE NO OF ROWS AND COLS  \n");
    scanf("%d %d", &m, &n);

    printf("ENTER THE MATRIX ELEMENTS   \n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (isPrime(mat[i][j]))
                printf("%d ", mat[i][j]);

    return 0;
}