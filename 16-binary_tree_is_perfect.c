#include "binary_trees.h"
/**
 * max - returns the greater of two integer values
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: greater of a and b
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * height - measures height of a binary tree
 *
 * @tree: binary tree
 *
 * Return: height of binary tree
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (max(height(tree->left), height(tree->right) + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 * If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right) &&
		height(tree->left) == height(tree->right));
}
