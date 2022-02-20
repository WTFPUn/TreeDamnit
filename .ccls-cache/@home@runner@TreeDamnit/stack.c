#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

/* Create a new stack with the specify capacity
 * Return pointer to the stack structure if successful
 *        or NULL if the stack can't be created 
 *        e.g. memory allocation error  
 */
STACK_T* stackCreate(int capacity)
{
  STACK_T* stack = (STACK_T*) calloc(1,sizeof(STACK_T));
  if(stack == NULL)
    return NULL;
  stack->data = listCreate(capacity);
  if(stack->data == NULL)
    return NULL;
  return stack;
}

/* Destroy the stack and release all memory
 */
void stackDestroy(STACK_T* stack)
{
  listDestroy(stack->data);
  free(stack);
}

/* Returns the number of elements (could be zero)
 * or -1 if the stack has not been created
 */
int stackSize(STACK_T* stack)
{
  return stack->data->currentSize;
}

/* Add new element to the top of the stack
 * Return -1 if the stack hasn't been created
 *        -2 if the stack is full 
 *         1 if the operation is successful
 */
int stackPush(STACK_T* stack, void* data)
{
  if(stack == NULL)
    return -1;
  if(stack->data->currentSize == stack->data->maxSize){
    printf("This fucking Stack is Fucking Full!");
  }
  return listAppend(stack->data, data);
}

/* Remove an element from the top of the stack
 * Return -1 if the stack hasn't been created
 *        -2 if the stack is empty
 *         1 if the operation is successful
 */
int stackPop(STACK_T* stack, void** data)
{
  if(stack == NULL)
    return -1;
  if(!stack->data->currentSize)
    return -2;
  listGet(stack->data, stack->data->currentIndex, data);
  listRemoveAt(stack->data, stack->data->currentIndex);
  return 1;
}