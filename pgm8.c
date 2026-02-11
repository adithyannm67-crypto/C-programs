
// Search for a particular number in a list of N numbers using linear search. Display
// the position of the number in the list if the number is present. Otherwise display
// suitable message.

#include <stdio.h>

int main()
{
    int n, a[100], i, num, pos = -1;

    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("ENTER THE NUMBER TO BE SEARCHED\n");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
        if (num == a[i])
        {
            pos = i;
            break;
        }

    if (pos == -1)
        printf("ELEMENT NOT FOUND");
    else
        printf("ELEMENT FOUND AT %d th INDEX", pos);
    return 0;
}