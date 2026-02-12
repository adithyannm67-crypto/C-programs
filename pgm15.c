// Check whether a given square matrix is symmetric. If not symmetric display the
// transpose of the matrix.

#include <stdio.h>

int main()
{
    int mat[20][20], i, j, n, notSym = 0;

    printf("ENTR THE ORDER OF THE MATRIX \n");
    scanf("%d", &n);

    printf("ENTER THE MATRIX ELEMENTS   \n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
            if (mat[i][j] != mat[j][i])
            {
                notSym = 1;
                break;
            }
        if (notSym == 1)
            break;
    }

    if (notSym == 1)
    {
        printf("THE GIVEN MATRIX IS NOT SYMMETRIC\n");
        printf("THE TRANSPOSE OF THE GIVEN MATRIX IS \n");

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d ", mat[j][i]);
            printf("\n");
        }
    }
    else
        printf("THE GIVEN MATRIX IS SYMMETRIC\n");
}