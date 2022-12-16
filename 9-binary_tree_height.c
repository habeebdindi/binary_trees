#include "binary_trees.h"
int max(int num1, int num2);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree whose height is to be measured
 *
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (max(l_height, r_height) + 1);
}
/**
 * max - finds the maximum between two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: returns the larger of the two integers
 */
int max(int num1, int num2)
{
	/* condition ? expressionIfTrue : expressionIfFalse */
	return ((num1 > num2) ? num1 : num2);
}
