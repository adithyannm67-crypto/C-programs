

// Sort N integers in ascending order using bubble sort algorithm.

#include <stdio.h>

int main()
{
    int a[50], i, j, temp, n;

    printf("ENTER THE ARRAY SIZE   :   ");
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    printf("THE SORTED ARRAY IS     \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
