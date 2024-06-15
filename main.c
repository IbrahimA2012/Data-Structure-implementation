/**************Includes*************/
#include "Std_Types.h"
#include "Stack_DS.h"
/*****************end***************/
stack_ds_t stack1 ;
uint32 stack_value  = 0 ;
int main()
{
    return_status_t ret = R_NOK ;
    ret = stack_Init(&stack1);
    /**Push to the stack **/
    ret = stack_push(&stack1,50);
    ret = stack_push(&stack1,87);
    ret = stack_push(&stack1,88);
    ret = stack_push(&stack1,5);
    ret = stack_push(&stack1,3);
    ret = stack_push(&stack1,11);

    /**Print All Elements **/
     stack_display(&stack1);

    /**pop from the stack**/
    ret = stack_pop(&stack1,&stack_value);
    printf("stack value = %i \n",stack_value);
    ret = stack_pop(&stack1,&stack_value);
    printf("stack value = %i \n",stack_value);
    ret = stack_pop(&stack1,&stack_value);
    printf("stack value = %i \n",stack_value);
    ret = stack_pop(&stack1,&stack_value);
    printf("stack value = %i \n",stack_value);
    ret = stack_pop(&stack1,&stack_value);
    printf("stack value = %i \n",stack_value);
    ret = stack_pop(&stack1,&stack_value);
    printf("stack value = %i \n",stack_value);

    ret = stack_push(&stack1,99);
    uint32 top_value ;
    /**Get the top of the stack **/
    ret = stack_top(&stack1,&top_value);
    printf("Top Value in the stack : %i",top_value);

    return 0;
}
