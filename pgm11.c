// Search for a number in a sorted list of numbers using binary search.

#include <stdio.h>

int main()
{
    int a[50], i, j, temp, n, first, last, mid, item, pos = -1;

    printf("ENTER THE ARRAY SIZE   :   ");
    scanf("%d", &n);

    printf("ENTER THE A SORTED ARRAY   \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("ENTER THE NUMBER TO BE SEARCHED   \n");
    scanf("%d", &item);

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

    first = 0;
    last = n - 1;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (item < a[mid])
            last = mid - 1;
        else if (item > a[mid])
            first = mid + 1;
        else
        {
            pos = mid;
            break;
        }
    }

    if (pos == -1)
        printf("ELEMENT NOT FOUND!!!");
    else
        printf("ELEMENT FOUND AT %d th POSITION.\n", pos);

    return 0;
}