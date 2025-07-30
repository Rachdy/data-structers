#include "stdio.h"
#include "stdlib.h"
#include "stack.h"


struct Stack;

// Function to initialize the stack

struct Stack* stack_create(int stack_size)
{
	Stack* S = (Stack*)malloc(sizeof(Stack));
	if (!S) return NULL;//check Memory allocation for Stack S 
	S->size = stack_size;
	S->items = (int*)malloc(stack_size * sizeof(int));
	if (!S->items) {//check Memory allocation  for items
		printf("Memory allocation failed for items!\n");
		free(S);
		return NULL;
	}
	S->top = -1;

	return S;
}

// return true id stack is empty and false when not
bool is_Empty( Stack* S)
{
	if (S->top == -1)
	{ // if the top = -1 means no value are inside the stack
		return true;// return true if the stack is empty
	}
	else
	{
		return false;// return false when the stack is not empty
	}
}


//function to know how much elements are inside the Stack
int size_of_stack(Stack* S) {
	return S->top;
}

//check if the Stack is full or not
bool is_full(Stack* S) {
	if (S->top == S->size - 1) return true;
	else return false;
}

// Push new value into Stack
bool stack_push( Stack* S, int value)
{
	if (S->top < S->size -1)
	{			  // check if stack if full when not push the new value
		S->top++; // increment the top
		S->items[S->top] = value;
		return true;
	}
	return false;
}
// delete the stack from memory
void stack_delete(Stack* S)
{
	free(S);
}

// delete the last element
int stack_pop(Stack* S)
{
	if (is_Empty(S))
	{ // when the stack is empty return 0 as default value
		return -1;
	}
	int element = S->items[S->top];
	S->top--;
	return element;
}

//expand the Stack if it is  full
bool expand_stack(Stack *S) {
	if (is_full(S)) {//check if the stack is full 
		//if yes expand the size of stack
		int* temp = (int*)realloc(S->items, (S->size * 1));

		//check if Memory allocation for temp is successful
		if (temp) {
			S->items = temp;
			return true;// return when Memory allocation for temp is successful
		}
		else {
			return false; //return false when Memory allocation faild
		}
	}
	else return false;// return false if the stack is not full

}

// function to clear the stack 

bool clear_stack(Stack *S) {

	if (is_Empty) {
		return false; // the Stack is allready empty
	}
	else {
		free(S->items);

		S->items = (int*)malloc(S->size * sizeof(int));
		if (!S->items) {//check Memory allocation  for items is successful
			printf("Memory allocation failed for items!\n");
			free(S);
			return false;
		}
		return true;
	}

}

