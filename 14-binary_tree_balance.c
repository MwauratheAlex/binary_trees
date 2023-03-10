#include "binary_trees.h"

/**
 * max - returns the bigger of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: the bigger of a and b
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * height - returns height of a tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: height of a tree
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (max(height(tree->left), height(tree->right)) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor of a binary tree
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
