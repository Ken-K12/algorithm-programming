#include<stdio.h>

int main()
{
    int i, j, k;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            for (k = 0; k < 2; k++){
                printf ("%d\n" , i*j+k);
            }

        }
    }

    return 0;
}