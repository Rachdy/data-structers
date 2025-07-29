
#ifndef __STACK_H__
#define __STACK_H__
enum {max = 100 };
typedef struct{
	int top;
	int items[max];
}Stack; //forward declaration
struct Stack* stack_init(); // create  new Stack
void stack_push(struct Stack*, int); //push new element into stack
int stack_pop(struct Stack*); //delet last element 
void stack_delete(struct Stack*); //Delete the Stack
#endif //__STACK_H__
