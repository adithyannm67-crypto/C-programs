// Write a function for finding the largest number in a one dimensional array, having N
// elements. Using this function display the largest element in each row of a mxn matrix.

#include <stdio.h>

int findLargest(int *ar, int n)
{
    int large = *ar;

    for (int i = 1; i < n; i++)
        if (ar[i] > large)
            large = ar[i];
    return large;
}

int main()
{
    int a[20][20], r, c;

    printf("rows and cols       ");
    scanf("%d %d", &r, &c);

    printf("MATRIX    =   ");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++)
        printf("%d ", findLargest(a[i], c));
}