// Given tw0 sorted list of numbers. Merge these two lists to form a new list such that the
// resultant list is also in sorted order.

#include <stdio.h>

int main()
{
    int a[50], b[50], i, j, n1, n2, merged[50];
    printf("ENTER THE NO OF ELEMNETS IN ARRAY A & B    \n");
    scanf("%d %d", &n1, &n2);

    printf("ENTER THE ELEMENTS IN A \n   ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("ENTER THE ELEMENTS I B \n   ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;

    int count = 0;

    while (i < n1 && j < n2)
        if (a[i] <= b[j])
            merged[count++] = a[i++];
        else
            merged[count++] = b[j++];

    while (i < n1)
        merged[count++] = a[i++];
    while (j < n2)
        merged[count++] = b[j++];

    printf("A MERGED B  = ");
    for (i = 0; i < count; i++)
        printf("%d ", merged[i]);

    return 0;
}