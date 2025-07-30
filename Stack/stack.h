#ifndef __STACK_H__
#define __STACK_H__
#include"stdbool.h"

typedef struct
{
	int top;
	int* items;
	int size;
} Stack;								  // forward declaration
struct Stack* stack_create(int size_stack); // create  new Stack
bool stack_push(struct Stack*, int);	  // push new element into stack
int stack_pop(struct Stack*);			  // delet last element
void stack_delete(struct Stack*);		  // Delete the Stack
#endif
