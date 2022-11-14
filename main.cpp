#include "stack.h"


int main ()
{
    my_stack stk;
    constructor (&stk, 10);

    push (&stk, 'k');
    stk.data [stk.size++] = 'k';

    printf ("%c\n", stk.data[1]);

    stack_check (&stk);

    return 0;
}


int old_main()
{

    int a1 [5] = {};
    my_stack stk;
    int a3 [10] = {};

    constructor (&stk, 10);

    printf ("can_1 = %x\n", stk.canary_1);

    for (int i = 0; i < 5; i ++)
    {
        printf ("a1 [%d] = %d\n", i, a1[i]);
    }

    printf ("\n\n");

    for (int i = 0; i < 7; i ++)
    {
        a1[i] = i;
    }

    printf ("can_1 = %x\n", stk.canary_1);


    
    return 0;
} 
