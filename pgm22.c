// Write a function for checking whether a string is palindrome. Using this function display the
// palindrome words in a line of text.

#include <stdio.h>

int isStringPalindrome(char *s, int len)
{
    for (int i = 0; i < len / 2; i++)
        if (*(s + i) != *(s + len - i - 1))
            return 0;
    return 1;
}

int main()
{
    char txt[60], temp[20];

    printf("ENTER THE STRING    \n");
    fgets(txt, sizeof(txt), stdin);

    printf("THE PALINDROME WORDS IN THE GIVEN LINE OF TEXT ARE  \n");

    for (int i = 0, count = 0; txt[i] != '\0'; i++)
    {
        if (txt[i] == ' ' || txt[i] == '\n')
        {
            if (count > 0)
            {
                temp[count] = '\0';
                int res = isStringPalindrome(temp, count);

                if (res)
                    puts(temp);
            }
            count = 0;
        }
        else
            temp[count++] = txt[i];
    }

    return 0;
}