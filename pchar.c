#include "monty.h"
/**
 * pchar - prints the char at the top of the stack, followed by a new line
 * @stack: pointer to the top of the stack
 * @line_number: line number of the command being run
 * Return: void
 */

void pchar(stack_t **stack, unsigned int line_number)
{
        if (*stack == NULL)
        {
                fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
                exit(EXIT_FAILURE);
        }

        if ((*stack)->n < 0 || (*stack)->n > 127)
        {
                fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
                exit(EXIT_FAILURE);
        }

        printf("%c\n", (*stack)->n);
}
