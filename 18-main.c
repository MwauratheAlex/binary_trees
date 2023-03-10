#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
	binary_tree_t *node;
	binary_tree_t *uncle;

	root = binary_tree_node(NULL, 70);

	node = root;
	uncle = binary_tree_uncle(node);
	if (uncle)
		printf("Uncle of (%d) is (%d)\n", node->n, uncle->n);
	else
		printf("Uncle of (%d) is (%p)\n", node->n, (void *)uncle);

	binary_tree_print(root);
    return (0);
}

