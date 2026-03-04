// Find the alphabet which is occurring more number of times in a line of text. Also
// display its frequency. (b and B are treated same).

#include <stdio.h>

int main()
{
    char text[150];
    int freq[26] = {0}, i;
    printf("ENTER TEXT  \n");

    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] =text[i]- 'a'+'A';
        if (text[i] >= 'A' && text[i] <= 'Z')
            freq[text[i] - 'A']++;
    }

    

    int max = freq[0];
    char c='A';
    for (i = 1; i < 26; i++)
        if (freq[i] > max)
        {
            max = freq[i];
            c = i + 'A';
        }

    printf("\nTHE max repeated charector    :    %c \n", c);
    printf("No of repetitions     :    %d \n", max);

    return 0;
}