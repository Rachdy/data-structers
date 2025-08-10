#ifndef __TEST_HPP
#define __TEST_HPP


#include"stack.h"

bool test_create_stack(size_t size);
bool test_delete_stack();
bool test_size_of_stack(size_t size);
bool test_is_empty(size_t size);
bool test_is_full(size_t size);
bool test_stack_push(size_t size);
bool test_stack_pop();
bool test_clear_stack();
bool test_expand_stack();
bool test_get_item();    
bool test_remaining_size();

#endif // !TEST_HPP
