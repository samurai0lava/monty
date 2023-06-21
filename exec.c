#include "monty.h"

/**
 * exec_instruction - Execute an instruction based on the opcode
 * @opcode: The opcode to execute
 * @stack: Pointer to the stack
 * @line_number: Current line number
 *
 * Return: void
 */
void exec_instruction(char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}};

	int i = 0;

	while (instructions[i].opcode)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
