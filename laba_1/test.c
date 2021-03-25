#include "main.h"
#include <assert.h>

void test() 
{
    assert(calculating_five(8) == 1);  
    assert(calculating_five(9) == 0);
    assert(calculating_five(30) == 0);
    assert(calculating_three(8) == 1);
    assert(calculating_three(9) == 3);
    assert(calculating_three(30) == 10);
}
#undef main

int main() 
{
    test();
    return 0;
}
