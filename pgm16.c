// Write a program for displaying the palindrome numbers in a matrix.
#include <stdio.h>
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
        {
            int original = mat[i][j],num=original,rev=0;
            
            while (num > 0)
            {
                int dig = num % 10;
                rev = rev * 10 + dig;
                num = num / 10;
            }
            if (rev == original)
                printf("%d", mat[i][j]);
        }
    return 0;
}