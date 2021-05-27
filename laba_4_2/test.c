#include "main.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int test_position() 
{
    char arr = "ab8c";
    char* check(arr);
    assert(test(arr) == "abc");
    return 0;
}

#undef main

int main() 
{
    test_position();
    return 0;
}