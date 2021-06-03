#include "main.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int test_position() 
{
    char *arr = "a8b";
    assert(check(arr) == "a b");
    return 0;
}

#undef main

int main() 
{
    test_position();
    return 0;
}