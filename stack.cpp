#include "stack.h"

void push (my_stack * stk, my_type elem)
{
    stk -> data [stk -> size++] = elem;
    stk -> hash_dat = hash_dat (stk);
    stk -> hash_stk = hash_stk (stk);
}

void pop (my_stack * stk)
{
    stk -> size --;
    stk -> hash_dat = hash_dat (stk);
    stk -> hash_stk = hash_stk (stk);
}

void constructor (my_stack * stk, int cap)
{
    stk -> size = 0;
    stk -> capacity = cap;
    stk -> canary_1 = CANARY_VALUE;
    stk -> canary_2 = CANARY_VALUE;


    stk -> data = (my_type *) calloc ((stk -> capacity)*sizeof(my_type) + 2*sizeof(int), 1);
    int * temp_p = (int*) stk -> data;
    temp_p[0] = CANARY_VALUE;
    stk -> data = (my_type*) (temp_p + 1);

    temp_p = (int*)((stk -> data) + (stk -> capacity));
    temp_p[0] = CANARY_VALUE;

    printf ("Canary_1 = %x, Canary_2 = %x, data [0] = %x\n", 
                *((int*)(stk -> data) - 1), *((int*)(stk -> data + (stk -> capacity))), stk -> data [0]);

    stk -> hash_dat = hash_dat (stk);
    stk -> hash_stk = hash_stk (stk);
}

void stack_check (my_stack * stk)
{
    assert (*((int*)(stk -> data) - 1) == CANARY_VALUE);
    assert(*((int*)(stk -> data + (stk -> capacity))) = CANARY_VALUE);
    assert (stk -> hash_dat == hash_dat(stk));
    assert (stk -> hash_stk == hash_stk(stk));
    printf ("ok\n");
}

int hash_dat (my_stack * stk)
{
    return (int)(stk -> data[0] + stk -> data [stk -> capacity - 1]);
}

int hash_stk (my_stack * stk)
{
    return stk -> size + stk -> capacity;
}