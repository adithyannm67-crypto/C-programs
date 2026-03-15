// Define a structure for storing a complex number. Write functions for finding the sum,
// difference and product of two complex numbers. Input two complex numbers and display
// their sum, difference and product using the above functions.
#include <stdio.h>

struct complex
{
    int real, img;
};

struct complex sum(struct complex a, struct complex b)
{
    struct complex p;
    p.real = a.real + b.real;
    p.img = a.img + b.img;
    return p;
}
struct complex difference(struct complex a, struct complex b)
{
    struct complex p;
    p.real = a.real - b.real;
    p.img = a.img - b.img;
    return p;
}
struct complex multiply(struct complex a, struct complex b)
{
    struct complex p;
    p.real = a.real * b.real - a.img * b.img;
    p.img = b.real * a.img + a.real * b.img;
    return p;
}

int main()
{
    struct complex a, b, c;

    printf("ENTER THE REAL AND IMAGINARY PARTS OF TWO REAL NUMBERS\n");
    printf("COMPLEX NO 1     :   ");
    scanf("%d %d", &a.real, &a.img);
    printf("COMPLEX NO 2     :   ");
    scanf("%d %d", &b.real, &b.img);

    printf("a = %d + %di\n", a.real, a.img);
    printf("b = %d + %di\n", b.real, b.img);

    printf("RESULTS   \n");
    c = sum(a, b);
    printf("a+b = %d + %di\n", c.real, c.img);
    c = difference(a, b);
    printf("a-b = %d + %di\n", c.real, c.img);
    c = multiply(a, b);
    printf("a*b = %d + %di\n", c.real, c.img);

    return 0;
}