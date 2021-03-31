#include "main.h"
#include <assert.h>

int test()
{
    assert(Find(1, 1) == 0);
    assert(Find(1, 0.1) == 2);
    assert(Find(2, 0.00001) == 6);
    assert(Find(9, 0.001) == 14);
    assert(Find(99, 0.1) == 79);
    assert(Find(9.999, 0.1) == 13);
    assert(Find(999.999, 0.999) == 0);
}
#undef main
int main()
{
    test();
}
