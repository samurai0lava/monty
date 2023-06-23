#include "monty.h"

/**
 * push - Push a value onto the stack
 * @stack: Double pointer to the stack
 * @line_number: Current line number
 *
 * Description: This function pushes an integer value onto the stack.
 * It expects an integer value as the next token in the input.
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	int n;
	stack_t *new_node;
	char *value;

	value = strtok(NULL, " \n");

	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = atoi(value);

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}

