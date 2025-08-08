#include "stack.h"

// typedef struct Stack;

// Function to initialize the stack

Stack *stack_create(size_t stack_size)
{
	Stack *S = (Stack *)malloc(sizeof(Stack));
	if (!S)
		return NULL; // check Memory allocation for Stack S
	S->size = stack_size;
	S->items = (int *)malloc(stack_size * sizeof(int));
	if (!S->items)
	{ // check Memory allocation  for items
		printf("Memory allocation failed for items!\n");
		free(S);
		return NULL;
	}
	S->top = 0; // the index start counting from  1 , when top = 0 means no element are inside the stack

	return S;
}

// function to know how much elements are inside the Stack

size_t size_of_stack(Stack *S)
{
	if (S == NULL)
		return 0;

	return S->top;
}
// return true id stack is empty and false when not
bool is_empty(Stack *S)
{
	if (S == NULL || S->top == 0)
	{
		return true;
	} // return true if the stack is empty or is null
	return false; // return false when the stack is not empty
}

// check if the Stack is full or not
bool is_full(Stack *S)
{
	if (S == NULL || S->top != S->size)
		return false;
	return true;
}

// Push new value into Stack
bool stack_push(Stack *S, int value)
{
	if (S == NULL)
		return false; // check if the Stack is not NUll

	if (S->top < S->size)
	{			  // check if stack if full when not push the new value
		S->top++; // increment the top
		S->items[S->top - 1] = value;
		return true;
	}
	return false;
}
// delete the stack from memory
void stack_delete(Stack *S)
{
	if (S == NULL)
	{
		free(S->items);
		free(S);
	}
}

// delete the last element
int stack_pop(Stack *S)
{
	if (S == NULL || is_empty(S))
	{ // when the stack is empty return 0 as default value
		return 0;
	}
	int element = S->items[S->top - 1];
	S->top--;
	return element;
}

// expand the Stack if it is  full
bool expand_stack(Stack *S)
{
	if (S == NULL)
		return false; // check first if the stack is not NULL
	if (is_full(S))
	{ // check if the stack is full
		// if yes expand the size of stack
		int *temp = (int *)realloc(S->items, (S->size * 2));

		// check if Memory allocation for temp is successful
		if (temp)
		{
			S->items = temp;
			S->size = S->size * 2;
			return true; // return when Memory allocation for temp is successful
		}
		else
		{
			return false; // return false when Memory allocation faild
		}
	}
	else
		return false; // return false if the stack is not full
}

// function to clear the stack

bool clear_stack(Stack *S)
{

	if (is_empty(S) || S == NULL)
	{
		return false; // the Stack is allready empty
	}
	else
	{
		free(S->items);

		S->items = (int *)malloc(S->size * sizeof(int));
		if (!S->items)
		{ // check Memory allocation  for items is successful
			printf("Memory allocation failed for items!\n");
			free(S);
			return false;
		}
		S->top = 0;
		return true;
	}
}

int get_item(Stack *S, size_t index)
{

	if (S == NULL || index <= size_of_stack(S))
	{
		return -1; //  return NULL if the index is not valid or the Stack is NULL
	}
	return S->items[index - 1];
	// return the value the value if the index is valid.
}

unsigned remaining_size(Stack *S)
{
	return S == NULL ? UINT_MAX : S->size - size_of_stack(S);
}
