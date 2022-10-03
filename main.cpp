#include <stdio.h>

int main()
{
    char name [25] = "";
    printf ("Please enter your name:\n");
    scanf ("%s", name);

    char surname [25] = "";
    printf ("Please enter your surname:\n");
    scanf ("%s", surname);

    printf ("henlo, %s %s!\n", name, surname);
    int age = 0;
    printf ("Please tell me also your age:\n");
    scanf ("%d", &age);

    printf ("henlo, %s!, whose age is %d\n", name, age);

    return 0;
}