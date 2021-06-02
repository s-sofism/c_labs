#include "main.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int test_position() {
    assert(testing('a','b') == 1);
    assert(testing('b','a') == 1);
    assert(testing('a','a') == 0);
    assert(testing('b','b') == 0);
    return 0;
}
#undef main
int main() {
    test_position();
    return 0;
}