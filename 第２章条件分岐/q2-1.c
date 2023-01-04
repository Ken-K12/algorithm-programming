/*
コード2.2を変更し、scanf関数を用いて変数xと変数yの値を、
キーボード等の標準入力から入力出来るようにしなさい
*/


/* code: q2-1.c (v1.16.00) */
#include <stdio.h>

int main()
{
    int x,y;

    printf ("enter X: ");
    // 10進数の整数
    scanf ("%d" , &x);
    printf ("enter Y: ");
    scanf ("%d", &y);

    printf ("X = %d\n", x);
    printf ("Y = %d\n", y);

    if (x > y) {
        printf ("X is greater than Y.\n");
    } else {
        printf ("X is less than or equal to Y.\n");
    }

    return 0;
}