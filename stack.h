#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

const int CANARY_VALUE = 0xDEADBEEF;

typedef char my_type;

struct my_stack
{
    int canary_1;
    my_type * data;
    int size;
    int capacity;
    int hash_stk;
    int hash_dat;
    int canary_2;
};

void push (my_stack * stk, my_type n);
void pop (my_stack * stk);
void constructor (my_stack * stk, int cap);
void stack_check (my_stack * stk);
int hash_dat (my_stack * stk);
int hash_stk (my_stack * stk);