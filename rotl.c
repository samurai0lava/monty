#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: pointer to the top of the stack
 * @line_number: line number of the command being run
 * Return: void
 */

void rotl(stack_t **stack, unsigned int line_number)
{
        (void)line_number;

    if (*stack != NULL && (*stack)->next != NULL)
    {
        stack_t *last = *stack;
        while (last->next != NULL)
            last = last->next;

        last->next = *stack;
        (*stack)->prev = last;
        *stack = (*stack)->next;
        (*stack)->prev->next = NULL;
        (*stack)->prev = NULL;
    }
}
