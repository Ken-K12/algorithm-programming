/*
（問１．２）
平方根の計算を行うプログラムを作成しなさい。表1-4の
sqrt, sqrtf, sqrtl の異なるデータ型の平方根を求める関数を利用すること
*/

/*
（解１．２）
データ型に注意してprintf関数の出力フォーマットを使うこと。
printf関数でfloat型やdouble型を出力する場合は"%f" を用いる。
C99規格ではprintf関数でdouble型を出力する場合に "%lf" も利用できる。
なお、scanf関数ではdouble型変換への入力をする場合は "%lf" が使われる。
（ただし、これらの入出力フォーマットは処理系によって異なる場合がある。）
*/

/* code: q1-2.c (v1.16.00) */
#include <stdio.h>
#include <math.h>

int main()
{
    float fx, fz;
    double dx, dz;
    long double lx, lz;

    fx = 100.00F;
    fz = sqrtf (fx);
    printf ("fx = %f\n", fx);
    printf ("sqrtf (fx) = %f\n\n", fz);

    dx = 100.00;
    dz = sqrt (dx);
    printf ("dx = %f\n", dx);
    printf ("sqrt (dx) = %f\n\n", dz);

    lx = 100.00L;
    lz = sqrtl (lx);
    printf ("lx = %Lf\n", lx);
    printf ("sqrtl (lx) = %Lf\n\n", lz);

    return 0;
}