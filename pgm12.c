// Given two sets (mathematical set) of numbers A and B. Find A U B, A ∩B, A-B.

#include <stdio.h>

int main()
{
    int a[50], b[50], n1, n2, i, j, aINb[50], count = 0, aUNb[50], aDIFFb[50];

    printf("ENTER THE NO OF ELEMNETS IN SET A & B    \n");
    scanf("%d %d", &n1, &n2);

    printf("ENTER THE ELEMENTS IN SET A \n   ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("ENTER THE ELEMENTS IN SET B \n   ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // INTERSECTION

    for (i = 0; i < n1; i++)
        for (j = 0; j < n2; j++)
            if (a[i] == b[j])
            {
                aINb[count] = a[i];
                count++;
                break;
            }

    printf("A intersection B  = ");
    for (i = 0; i < count; i++)
        printf("%d ", aINb[i]);

    // UNION

    count = 0;

    for (i = 0; i < n1; i++)
        aUNb[count++] = a[i];

    for (i = 0; i < n2; i++)
    {
        int found = 0;
        for (j = 0; j < n1; j++)
            if (b[i] == aUNb[j])
            {
                found = 1;
                break;
            }
        if (found == 0)
            aUNb[count++] = b[i];
    }

    printf("\nA Union B  = ");
    for (i = 0; i < count; i++)
        printf("%d ", aUNb[i]);

    // A diff B

    count = 0;

    

    for (i = 0; i < n1; i++)
    {
        int found = 0;
        for (j = 0; j < n2; j++)
            if (b[j] == a[i])
            {
                found = 1;
                break;
            }
        if (found == 0)
            aDIFFb[count++] = a[i];
    }

    printf("\nA DIFFERENCE B  = ");
    for (i = 0; i < count; i++)
        printf("%d ", aDIFFb[i]);

    return 0;
}