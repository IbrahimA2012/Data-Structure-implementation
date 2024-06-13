
#include "Stack_DS.h"



/** Implementation of functions **/
/**
  * @brief  initialize stack
  * @param  my_Stack pointer to the stack
  * @retval return status of the initialization process
**/
return_status_t stack_Init(stack_ds_t *my_Stack)
{
    return_status_t ret = R_NOK ;
    if(NULL == my_Stack)
    {
        ret = R_NOK ;
    }
    else
    {
        my_Stack->stack_pointer = -1 ;
        ret = R_OK;
    }
    return ret ;
}

/**
  * @brief  check if stack full
  * @param  my_Stack pointer to the stack
  * @retval return status of the stack process
**/
static stack_status_t stack_full(stack_ds_t *my_Stack)
{
    if(my_Stack->stack_pointer == stack_Max_size-1)
    {
        return STACK_FULL;
    }
    else
    {
        return STACK_NOT_FULL;
    }
}


/**
  * @brief  check if stack empty
  * @param  my_Stack pointer to the stack
  * @retval return status of the stack process
**/
static stack_status_t stack_empty(stack_ds_t *my_Stack)
{
    if(my_Stack->stack_pointer == -1)
    {
        return STACK_EMPTY;
    }
    else
    {
        return STACK_NOT_FULL;
    }
}


/**
  * @brief  insert new element to the stack
  * @param  my_Stack : pointer to the stack
  * @param  value : data in the stack element
  * @retval return status of the initialization process
**/
return_status_t stack_push(stack_ds_t *my_Stack, uint32 value)
{
    return_status_t ret = R_NOK ;

    if((NULL == my_Stack)||(STACK_FULL == stack_full(my_Stack)))
    {
#ifdef STACK_DEBUG
        printf("Error !! Stack is full \n");
#endif // STACK_DEBUG
        ret = R_NOK ;
    }
    else
    {
        my_Stack->stack_pointer++ ;
        my_Stack->data[ my_Stack->stack_pointer] = value ;
#ifdef STACK_DEBUG
        printf("Value (%i) has been pushed. \n",value);
#endif // STACK_DEBUG
        ret = R_OK;
    }
    return ret ;
}

/**
  * @brief  remove element from the stack
  * @param  my_Stack : pointer to the stack
  * @param  value    : pointer to the value
  * @retval return status of the initialization process
**/
return_status_t stack_pop(stack_ds_t *my_Stack, uint32 *value)
{
    return_status_t ret = R_NOK ;
    if((NULL == my_Stack)|| (NULL == value)||(STACK_EMPTY == stack_empty(my_Stack)))
    {
#ifdef STACK_DEBUG
        printf("Error Stack is Empty can't pop any value  \n");
#endif // STACK_DEBUG
        ret = R_NOK ;
    }
    else
    {
        *value = my_Stack->data[my_Stack->stack_pointer] ;
        my_Stack->stack_pointer-- ;
#ifdef STACK_DEBUG
        printf("Value (%i) popped from the stack \n",*value);
#endif // STACK_DEBUG
        ret = R_OK;
    }
    return ret;
}

/**
  * @brief  give the top element
  * @param  my_Stack : pointer to the stack
  * @param  value    : pointer to the value
  * @retval return status of the initialization process
**/
return_status_t stack_top(stack_ds_t *my_Stack, uint32 *value)
{
    return_status_t ret = R_NOK ;
    if( (NULL == my_Stack) || (NULL == value) || (STACK_EMPTY == stack_empty(my_Stack)))
    {
#ifdef STACK_DEBUG
        printf("Error Stack is Empty no top value  \n");
#endif // STACK_DEBUG
        ret = R_NOK ;
    }
    else
    {
        *value = my_Stack->data[my_Stack->stack_pointer];
#ifdef STACK_DEBUG
        printf("Stack top value : (%i) \n",*value);
#endif // STACK_DEBUG
        ret = R_OK;
    }
    return ret ;
}

/**
  * @brief  give size of the stack
  * @param  my_Stack : pointer to the stack
  * @param  size    : pointer to the size of the stack
  * @retval return status of the initialization process
**/
return_status_t stack_size(stack_ds_t *my_Stack, uint32 *stack_size)
{
return_status_t ret = R_NOK ;
    if( (NULL == my_Stack) || (NULL == stack_size) )
    {
        ret = R_NOK ;
    }
    else
    {
        *stack_size = my_Stack->stack_pointer +1;
        ret = R_OK;
    }
    return ret ;
}


/**
  * @brief  print element at the stack
  * @param  my_Stack : pointer to the stack
  * @retval return status of the initialization process
**/
return_status_t stack_display(stack_ds_t *my_Stack)
{
    return_status_t ret = R_NOK ;
    if(NULL == my_Stack || STACK_EMPTY == stack_empty(my_Stack))
    {
    #ifdef STACK_DEBUG
        printf("Error Stack is Empty there is no value to display\n");
    #endif // STACK_DEBUG
        ret = R_NOK ;
    }
    else
    {
    sint32  l_counter = 0;
    printf("Stack data :  ");
        for(l_counter = my_Stack->stack_pointer ; l_counter >= 0 ;l_counter--)
        {
            printf("%i  \t",my_Stack->data[l_counter]);
        }
        printf("\n");
        ret = R_OK ;
    }
    return ret ;
}
/**Implementation End **/
