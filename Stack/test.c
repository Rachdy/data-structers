#include"test.h"

//test function create stack
bool  test_create_stack(size_t size) {
	Stack* stack = stack_create(size);//create stack with size 
	if (!stack) return false;//check if the memory allocation is faild or not 
	bool result = stack != NULL && stack->size == size && stack->top == 0 && stack->items != NULL;// 
	stack_delete(stack);// delete the stack from memory 
	return result;// return result

}

bool test_delete_stack() {
	Stack* stack = stack_create(10);// create Stack with size = 10
	stack_delete(stack);// delete stack from memory
	return stack == NULL ? true : false;
}

bool test_size_of_stack(size_t size) {
	Stack* stack = stack_create(size);// create stack for testing
	if (!stack) printf("creation of stack faild:)\n"); return false;// check if creation is successful
	bool result = size_of_stack(stack) == stack->top;// check if the return from function size_of_stack is equal stack.top
	stack_delete(stack);//delete it from memory
	return result; // return the result
}

bool test_is_empty(size_t size){
	Stack* stack = stack_create(size);//create stack with size
	if (!stack) printf("creation of stack faild:)\n"); return false;
	bool result;
	if (is_empty(stack) == true && stack->top == 0) result = true;// when the return from is_empty = true and top=0 mean the result is true 

	else if (is_empty(stack) == false && stack->top != 0) result = true; // when the return from is_empty = false  and top != 0 mean the result is true 
	else result = false; // all others  case the return is false 
	stack_delete(stack);// delete the stack from the memory
	return result;
}

bool test_is_full(size_t size) {
	Stack* stack = stack_create(size);// create new stack with size
	if (!stack) printf("creation of stack faild:)\n"); return false;// check the memory alloction 
	bool result;
	if (is_full(stack) == true && stack->top == stack->size) result = true; // if is_full =  true and stack->top = stack->size mean the stack is full and the return is true
	else if (is_full(stack) == false && stack->top != stack->size) result = false;// if is_full =  false  and stack->top != stack->size mean the stack isn't full and the return is true
	else result = false; // all other cases reference that the return of is_full is false 
	stack_delete(stack);// delete the stack from  memory
	return result;// return the result 
}


bool test_stack_push(size_t size) {
	Stack* stack = stack_create(size);
	if (!stack) printf("creation of stack faild\n"); return false;
	bool result;

	return result;
}



bool test_stack_pop();
bool test_clear_stack();
bool test_expand_stack();
bool test_get_item();
bool test_remaining_size();
