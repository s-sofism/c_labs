#include "main.h"
#include <assert.h>

void test() 
{
    assert(calculating_five(8) == 1);
    assert(calculating_free(8) == 1);
    assert(calculating_five(9) == 0);
    assert(calculating_free(8) == 3);
    assert(calculating_five(30) == 0);
    assert(calculating_free(30) == 10);
    assert(input(5) == "enter correct value");
    assert(input(-9) == "enter correct value");
}
#undef main

int main() 
{
    test();
    return 0;
}