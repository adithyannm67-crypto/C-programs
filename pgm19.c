// Input N student names and arrange them in alphabetical order using exchange sort.

#include <stdio.h>
#include <string.h>

int main()
{
    char names[100][20], temp[20];
    int n, i, j;

    printf("ENTER THE NO OF NAMES   \n");
    scanf("%d", &n);
    getchar();

    printf("ENTER THE NAMES\n");
    for (i = 0; i < n; i++)
        fgets(names[i], sizeof(names[i]), stdin);

    for (i = 0; i < n-1 ; i++)
        for (j = i+1; j < n ; j++)
        {
            int large = (strcmp(names[i], names[j]) > 0) ? 1 : 0;
            if (large)
            {

                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }

    for (i = 0; i < n; i++)
        puts(names[i]);
}