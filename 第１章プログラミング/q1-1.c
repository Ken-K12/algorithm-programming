/* code: q1-1.c (v1.16.00) */
/*
（問１．１）天井関数ceilと床関数floorを使ったプログラムを作成しなさい

*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;

    x = 3.14159;
    y = 0.0;
    printf ("x=%f\n\n", x);
    y = ceil(x);
    printf ("ceil (x) = %f\n", y);
    y = floor(x);
    printf ("floor (x) = %f\n", y);

    return 0;
}