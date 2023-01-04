/*
（問１．３）
コード1.6を変更して、ファーレンハイト温度（Fahrenheit; 華氏）からセルシウス温度（Celsius; 摂氏）
の換算を行うプログラムを作成しなさい。ファーレンハイト温度（f）からセルシウス温度（c）への換算は以下の式で表される

c = 5.0 / 9.0 * (f - 32.0)
*/

/* code: q1-3.c (v1.16.00) */
#include <stdio.h>
#include <math.h>

int main()
{
    float fahrenheit, celsius;

    fahrenheit = 25.1;
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf ("%f (Fahrenheit) = %f (Celsius) \n", fahrenheit, celsius);

    return 0;
}