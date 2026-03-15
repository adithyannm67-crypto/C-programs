// Implement the following string library functions using pointers :
// 1. string length (int StringLengh(char *s))
// 2. string copy ( void StringCopy(char *s1, char *s2) )
// 3. string comparison ( int StringCompare (char *s1, char *s2))
// 4. string concatenation ( void StringConcat(char *s1, char *s2) )

#include <stdio.h>

int stringLength(char *s)
{
    int i;
    for (i = 0; *(s + i) != '\0'; i++)
        ;
    return i;
}

void stringCopy(char *s1, char *s2)
{
    int j;

    for (j = 0; *(s2 + j) != '\0'; j++)
        *(s1 + j) = *(s2 + j);
    *(s1 + j) = '\0';
}

int StringCompare(char *s1, char *s2)
{
    int i = 0;
    while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
    {
        if (*(s1 + i) < *(s2 + i))
            return -1;
        else if (*(s1 + i) > *(s2 + i))
            return +1;
        i++;
    }
    if (*(s1 + i) != '\0')
        return +1;
    if (*(s2 + i) != '\0')
        return -1;
    return 0;
}

void stringConcat(char *s1, char *s2)
{
    int i, j;
    for (i = 0; *(s1 + i) != '\0'; i++)
        ;
    for (j = 0; *(s2 + j) != '\0'; j++)
        *(s1 + i + j) = *(s2 + j);
    *(s1 + i + j) = '\0';
}

int main()
{
    char s1[100], s2[100], s3[100] = "";

    printf("ENTER TWO STRINGS\n");
    printf("STRING 1  :  ");
    fgets(s1, sizeof(s1), stdin);
    printf("\nSTRING 2  :  ");
    fgets(s2, sizeof(s2), stdin);

    s1[stringLength(s1) - 1] = '\0';
    s2[stringLength(s2) - 1] = '\0';

    printf("\n\nRESULTS\n");
    printf("LENGTH OF STRING 1  :  %d\n", stringLength(s1));
    printf("LENGTH OF STRING 2  :  %d\n", stringLength(s2));

    int cmp = StringCompare(s1, s2);
    printf("\nSTRING COMPARISON  :  ");

    if (cmp > 0)
        printf("STRING 1 IS GREATER THAN STRING 2\n");
    else if (cmp < 0)
        printf("STRING 1 IS LESS THAN STRING 2\n");
    else
        printf("STRING 1 AND STRING 2 ARE EQUAL\n");

    printf("\nSTRING COPYING  ");

    printf("\nBEFORE COPYING");
    printf("\ns3 = %s\n", s3);
    printf("s2 = %s\n", s2);

    stringCopy(s3, s2);

    printf("\nAFTER COPYING\n");
    printf("\ns3 = %s\n", s3);
    printf("s2 = %s\n", s2);

    printf("\nSTRING CONCATENATION\n");

    printf("\nBEFORE CONCATENATION");
    printf("\ns1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    stringConcat(s1, s2);

    printf("\nAFTER CONCATENATION");
    printf("\ns1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    return 0;
}