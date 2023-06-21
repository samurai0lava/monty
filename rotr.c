#include "monty.h"
/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to the top of the stack
 * @line_number: line number of the command being run
 * Return: void
 */

void rotr(stack_t **stack, unsigned int line_number)
{
        stack_t *temp;
        (void)line_number;

        if (*stack && (*stack)->next)
        {
                temp = *stack;

                while (temp->next != NULL)
                        temp = temp->next;

                temp->prev->next = NULL;
                temp->prev = NULL;
                temp->next = *stack;
                (*stack)->prev = temp;
                *stack = temp;
        }
}
