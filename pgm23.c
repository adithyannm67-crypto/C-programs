// Write a recursive function for displaying the binary equivalent of a decimal number. Using
// this function display the binary equivalent of a set of N positive integers stored in an array.

#include <stdio.h>

int binary(int *b, int n)
{
    if (n == 0)
        return 0;

    int j = binary(b, n / 2);
    *(b + j) = n % 2;
    return j + 1;
}

int main()
{
    int bin[100], a[100], n, i, j;

    printf("ENTER THE NO OF POSITIVE INTEGERS  \n");
    scanf("%d", &n);

    printf("ENTER THE POSITIVE INTEGERS\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        int len = binary(bin, a[i]);
        printf("%d === ", a[i]);
        for (j = 0; j < len; j++)
            printf("%d", bin[j]);
        printf("\n");
    }

    return 0;
}