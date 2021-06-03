#include "main.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int test_position()
 {
    struct ListItem *list1 = NULL;
    struct ListItem *list2 = NULL;
    struct ListItem *list3 = NULL;
    struct ListItem *list4 = NULL;
    createList(&list1,"abc");
    createList(&list2,"aba");
    createList(&list3,"abba");
    createList(&list4,"abab");
    assert(isPalindrome(list1) == 0);
    assert(isPalindrome(list2) == 1);
    assert(isPalindrome(list3) == 1);
    assert(isPalindrome(list4) == 0);
    return 0;
}
#undef main
int main() {
    test_position();
    return 0;
}