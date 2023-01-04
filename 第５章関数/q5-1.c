/* code: q5-1.c*/

#include <stdio.h>

float trapezoid(float a, float b, float h)
{
    float c;
    c = ((a + b) / 2.00F) * h;
    return c;
}

int main()
{
    float t;
    t = trapezoid(3.00, 4.00, 5.00);
    printf("trapezoid = %f\n" , t);
    
    return 0;
}