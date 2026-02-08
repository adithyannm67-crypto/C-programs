// Find the largest element in a m x n matrix. Also display its position. {If the largest
// element is appearing more than once display the position of the first one in the matrix}

#include <stdio.h>

int main()
{
    int mat[20][20], i, j, m, n, max, rowPos, colPos;
    printf("ENTR THE NO OF ROWS AND COLS  \n");
    scanf("%d %d", &m, &n);

    printf("ENTER THE MATRIX ELEMENTS   \n");

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    max = mat[0][0];
    rowPos = 0;
    colPos = 0;

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (mat[i][j] > max)
            {
                max = mat[i][j];
                rowPos = i;
                colPos = j;
            }

    printf("MAX ELEMENT  %d FOUND AT (%d,%d) th POSITION   \n", max, rowPos, colPos);

    return 0;
}