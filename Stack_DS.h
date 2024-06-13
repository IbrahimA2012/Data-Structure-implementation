#ifndef _Stack_DS_
#define _Stack_DS_

#include "Std_Types.h"


/**size of stack**/
#define stack_Max_size 5
/**stack debug **/
#define STACK_DEBUG
/** Create Stack
 * pointer for count elements
 * Array
 **/
typedef struct stack_ds {
uint32 data[stack_Max_size];
sint32 stack_pointer ;
}stack_ds_t;

/**
* return 0 if Stack is empty
* return 1 if Stack is full
* return 2 if Stack is not full
**/
typedef enum stack_status{
STACK_EMPTY = 0,
STACK_FULL,
STACK_NOT_FULL
}stack_status_t;


/**Functions prototype **/

/**
  * @brief  initialize stack
  * @param  my_Stack pointer to the stack
  * @retval return status of the initialization process
**/
return_status_t stack_Init(stack_ds_t *my_Stack);


/**
  * @brief  insert new element to the stack
  * @param  my_Stack : pointer to the stack
  * @param  value : data in the stack element
  * @retval return status of the initialization process
**/
return_status_t stack_push(stack_ds_t *my_Stack , uint32 value);

/**
  * @brief  remove element from the stack
  * @param  my_Stack : pointer to the stack
  * @param  value    : pointer to the value
  * @retval return status of the initialization process
**/
return_status_t stack_pop(stack_ds_t *my_Stack , uint32 *value);

/**
  * @brief  give the top element
  * @param  my_Stack : pointer to the stack
  * @param  value    : pointer to the value
  * @retval return status of the initialization process
**/
return_status_t stack_top(stack_ds_t *my_Stack , uint32 *value);

/**
  * @brief  give size of the stack
  * @param  my_Stack : pointer to the stack
  * @param  size    : pointer to the size of the stack
  * @retval return status of the initialization process
**/
return_status_t stack_size(stack_ds_t *my_Stack , uint32 *stack_size);


/**
  * @brief  print element at the stack
  * @param  my_Stack : pointer to the stack
  * @retval return status of the initialization process
**/
return_status_t stack_display(stack_ds_t *my_Stack);

/**End of functions prototype**/
#endif // _Stack_DS_
