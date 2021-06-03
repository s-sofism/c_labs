#include "main.h"
#include <iostream>
#include <assert.h>

void test()
{
  tree* test_tree = nullptr;
  List* r = nullptr;
  List* l = nullptr;

  add(&test_tree, 5);
  add(&test_tree, 1);
  add(&test_tree, 2);
  add(&test_tree, 3);
  add(&test_tree, 4);
  add(&test_tree, 6);
  add(&test_tree, 7);
  add(&test_tree, 8);
  add(&test_tree, 9);
  add(&test_tree, 10);

  in_order(test_tree, &r, &l);
  
  List* test_even = nullptr;
  add(&test_even, 2);
  add(&test_even, 4);
  add(&test_even, 6);
  add(&test_even, 8);
  add(&test_even, 10);
  
  List* test_uneven = nullptr;
  add(&test_uneven, 5); 
  add(&test_uneven, 1); 
  add(&test_uneven, 3); 
  add(&test_uneven, 7); 
  add(&test_uneven, 9); 

  assert(compare_lists(l, test_uneven) == true);
  assert(compare_lists(r, test_even) == true);
  
  free(r); free(test_even);
  free(l); free(test_uneven);

  delete_tree(test_tree);
}

#undef main 
int main()
{
    test();
    return 0;
}
