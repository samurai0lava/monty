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
	/* Get the integer value from the next token*/
	char *value;

	value = strtok(NULL, " \n");

	if (!value)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* Convert the value to an integer*/
	n = atoi(value);

	/* Create a new node*/
	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	/* Set the value of the new node*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;

	/* Update the previous pointer of the existing top node, if any */
	if (*stack)
		(*stack)->prev = new_node;

	/* Update the stack pointer to point to the new node */
	*stack = new_node;
}
