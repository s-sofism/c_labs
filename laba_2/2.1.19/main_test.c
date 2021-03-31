#include "main.h"
#include <assert.h>

int test_bank()
{
    assert(AddToDeposit(300, 150) == 450);
    assert(AddToDeposit(100, 1) == 101);
    assert(ViewBalance(10101) == 10101);
    assert(ViewBalance(4) == 4);
    assert(AfterDays(20, 100) == 100);
    assert(AfterDays(40, 1000) == 1010.625);
}
#undef main

int main()
{
    test_bank();
}
