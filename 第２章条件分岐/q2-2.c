
#include <stdio.h>
#include <ctype.h>

int main()
{
    char grade;

    grade = 'b';
    // 小文字も大文字にするため
    grade = toupper(grade);
    switch (grade){
        case 'A':
          printf("excellent\n");
          break;
        case 'B':
          printf("good\n");
          break;
        case 'C':
          printf("fair\n");
          break;
        case 'D':
          printf("barely passing\n");
        case 'F':
          printf("not passing\n");
        default:
        printf("ERROR: invalid character\n");
        break;
    }

    printf("Your grade is %c\n", grade);
    return 0;
}