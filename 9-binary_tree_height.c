#include "binary_trees.h"

/**
 * max - returns max of two values
 *
 * @a: first value
 * @b:second value
 *
 * Return: the larger of a and b
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * If tree is NULL, your function must return 0
 *
 * Return: nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (max(
					binary_tree_height(tree->left),
					binary_tree_height(tree->right))
				+ 1);
}
