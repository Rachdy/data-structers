#include "stdio.h"
#include"stdlib.h"
#include"Header.h"
#include"stdbool.h"


struct Stack;
//Function to initialize the stack


struct Stack* stack_init() {
	struct Stack* S = (struct Stack*)malloc(sizeof(struct Stack));
        S->top = -1;
	return S;
}

// return true id stack is empty and false when not
bool isEmpty(struct Stack* S) {
	if (S->top == -1) { // if the top = -1 means no value are inside the stack
		return true;
	}
	else {
		return false;
	}
}
//Push new value into Stack
void stack_push(struct Stack* S, int value ) {
	if (S->top < MAX_size - 1) {// check if stack if full when not push the new value
		S->top++;//increment the top 
		S->item[S->top] = value;
	}	
}
// delete the stack from memory
void stack_delete(struct Stack* S) {
	free(S);	
}

//delete the last element
int stack_pop(struct Stack* S) {
	if (isEmpty(S)) {//when the stack is empty return 0 as default value 
		return -1;
	}
	int element = S->item[S->top];
	S->top--;
	return element;
}

