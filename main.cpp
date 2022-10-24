#include <stdio.h>
#include <stdlib.h>

int square (int x); // square : \Z \to \Z
int plus_5 (int x);
int cube   (int x);

int value_in_4 (int (*f) (int));

void * square_or_cube (int x);

int main()
{

    int (**f) (int x) = (int (**) (int)) calloc (3, sizeof (void*));

    f[0] = square;
    f[1] = plus_5;
    f[2] = cube;

    for (int i = 0; i < 3; i++)
    {
        printf ("%d\n", value_in_4(f[i]));
    }
    
    return 0;
} 

int square (int x)
{
    return x*x;
}

int plus_5 (int x)
{
    return x + 5;
}

int cube (int x)
{
    return x*x*x;
}

int value_in_4 (int (*f) (int))
{
    return f(4);
}

void * square_or_cube(int x)
{
    if (x == 2) return (void*) square;
    else if (x == 3) return (void*) cube;
    else return (void*) plus_5;
}