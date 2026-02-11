
// Display the binary equivalent of an unsigned decimal integer. (using 1-D array)

#include <stdio.h>

int main()
{
    int dec, bin[100], i = 0, dig;

    printf("ENTER THE DECIMAL NUMBER\n");
    scanf("%d", &dec);

    while (dec > 0)
    {
        dig = dec % 2;
        bin[i] = dig;
        dec = dec / 2;
        i++;
    }

    printf("BINARY EQUIVALANT IS ");

    for (i = i - 1; i > -1; i--)
        printf("%d", bin[i]);

    return 0;
}