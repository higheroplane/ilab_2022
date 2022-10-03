#include <stdio.h>

int main()
{
    char name [25] = "";
    printf ("Please enter your name:\n");
    scanf ("%s", name);

    char surname [20] = "";
    printf ("Please enter your surname:\n");
    scanf ("%s", surname);

    printf ("henlo, %s %s!\n", name, surname);

    return 0;
}