// Sort the letters of a string in alphabetical order

#include <stdio.h>

int main()
{
    char text[150], temp;
    int i, j, length = 0;
    printf("ENTER TEXT  \n");

    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '\n')
            text[i] = '\0';
        else
            length++;
    }

    printf("UNSORTED STRING    :   %s  \n", text);

    for (i = 0; i < length - 1; i++)
        for (j = 0; j < length - i - 1; j++)
            if (text[j] > text[j + 1])
            {

                temp = text[j];
                text[j] = text[j + 1];
                text[j + 1] = temp;
            }

    printf("SORTED STRING    :   %s  \n", text);
}