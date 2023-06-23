#include "monty.h"

/**
 * pall - Print all values in the stack
 * @stack: Double pointer to the stack
 * @line_number: Current line number
 *
 * Description: This function prints all the values in the stack, starting from
 * the top.
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	/* Print all the values on the stack, starting from the top */
	stack_t *current;

	(void)line_number;

	current = *stack;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

