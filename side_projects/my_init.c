#include <stdio.h>

int main(void)
{
    /* my first program in C */

    char f, m, l;
    int age;

    printf("Enter your Initials followed by your age: ");

    scanf("%c %c %c %d", &f, &m, &l, &age);

    printf("My initials are: %c%c%c and my age is %d.\n", f, m, l, age);

    return 0;
}
