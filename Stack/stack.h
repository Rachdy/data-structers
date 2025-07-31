#ifndef __STACK_H__
#define __STACK_H__
#include "stdbool.h"

typedef struct
{
	unsigned int top;
	int *items;
	size_t size;
} Stack;									   // forward declaration
struct Stack *stack_create(size_t stack_size); // create  new Stack
bool stack_push(struct Stack *, int);		   // push new element into stack
int stack_pop(struct Stack *);				   // delet last element
void stack_delete(struct Stack *);			   // Delete the Stack
#endif
