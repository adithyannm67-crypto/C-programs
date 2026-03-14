// Define an array of structure for storing the coefficients and exponents of a polynomial.
// Write a program for adding two polynomials.

#include <stdio.h>

struct polinomial
{
    int n;
    int coeffs[20], exps[20];
};

int main()
{

    struct polinomial polinomials[2], sumPolinomial;

    for (int i = 0; i < 2; i++)
    {
        printf("NO OF TERMS    :    ");
        scanf("%d", &polinomials[i].n);
        printf("\nENTER COEFFECIANTS  EXPONENTS\n");
        for (int j = 0; j < polinomials[i].n; j++)
            scanf("%d %d", &polinomials[i].coeffs[j], &polinomials[i].exps[j]);
    }

    int i = 0, j = 0, count = 0;
    while (i < polinomials[0].n && j < polinomials[1].n)
    {

        if (polinomials[0].exps[i] > polinomials[1].exps[j])
        {
            sumPolinomial.coeffs[count] = polinomials[0].coeffs[i];
            sumPolinomial.exps[count++] = polinomials[0].exps[i];
            i++;
        }

        else if (polinomials[1].exps[j] > polinomials[0].exps[i])
        {
            sumPolinomial.coeffs[count] = polinomials[1].coeffs[j];
            sumPolinomial.exps[count++] = polinomials[1].exps[j];
            j++;
        }
        else
        {
            sumPolinomial.coeffs[count] = polinomials[0].coeffs[i] + polinomials[1].coeffs[j];
            sumPolinomial.exps[count++] = polinomials[1].exps[j];
            i++;
            j++;
        }
    }

    while (i < polinomials[0].n)
    {
        sumPolinomial.coeffs[count] = polinomials[0].coeffs[i];
        sumPolinomial.exps[count++] = polinomials[0].exps[i];
        i++;
    }
    while (j < polinomials[1].n)
    {
        sumPolinomial.coeffs[count] = polinomials[1].coeffs[j];
        sumPolinomial.exps[count++] = polinomials[1].exps[j];
        j++;
    }
    sumPolinomial.n = count;

    printf("THE RESULTING POLINOMIAL    :   ");
    for (int i = 0; i < sumPolinomial.n; i++)
    {
        printf("%dx^%d ", sumPolinomial.coeffs[i], sumPolinomial.exps[i]);
        if (i != sumPolinomial.n - 1)
            printf("+ ");
    }
    return 0;
}