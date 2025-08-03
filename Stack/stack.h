#ifndef __STACK_H__
#define __STACK_H__
#include "stdio.h"
#include "stdbool.h"
#include "stdlib.h"

typedef struct
{
	unsigned int top;
	int *items;
	size_t size;
} Stack;									// forward declaration
Stack *stack_create(size_t stack_size);		// create  new Stack
size_t size_of_stack(Stack *S);				// return the current size of the Stack
bool is_empty(Stack *S);					// check if the Stack is empty or Not
bool is_full(Stack *S);						// check if the stack is full or not
bool stack_push(Stack *S, int value);		// push new element into stack
bool stack_pop(Stack *S);					// delet last element
void stack_delete(Stack *S);				// Delete the Stack
bool clear_stack(Stack *S);					// clear the stack
bool expand_stack(Stack *S);				// encrease the Size of the Stack
int get_item(Stack *S, unsigned int index); // get specific item from Stack
unsigned remaining_size(Stack *S);			//  return remaining size of the Stack
#endif