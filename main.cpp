#include <stdio.h>

int main()
{
    char name [20] = "";
    printf ("Please enter your name:\n");
    scanf ("%s", name);

    int age = 0;
    printf ("Please tell me also your age:\n");
    scanf ("%d", &age);

    printf ("henlo, %s!, whose age is %d\n", name, age);

    return 0;
}