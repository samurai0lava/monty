#include "monty.h"

/**
 * free_stack - Free a stack
 * @stack: Pointer to the top of the stack
 *
 * Description: This function frees a stack by traversing through each node
 * starting from the top. It iteratively frees each node and moves to the next
 * until the entire stack is freed
 *
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *current = stack;
	stack_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
