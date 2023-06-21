#include "monty.h"
/**
 * mul - multiplies the second top element of the stack with the top element
 * @stack: pointer to the top of the stack
 * @line_number: line number of the command being run
 * Return: void
 */

void mul(stack_t **stack, unsigned int line_number)
{
        if (*stack == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
                exit(EXIT_FAILURE);
        }

        (*stack)->next->n *= (*stack)->n;
        pop(stack, line_number);
}
