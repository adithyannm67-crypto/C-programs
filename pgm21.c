// Write a recursive function for finding factorial. Using this function find nCr.

#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n==0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n,r;
    printf("ENTER A n and r     \n");
    scanf("%d %d", &n ,&r);
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("FACTORIAL OF %dC%d is %d  \n", n,r, nCr);

    return 0;
}