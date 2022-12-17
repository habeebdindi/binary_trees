#include "binary_trees.h"

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: a pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect. if the tree is not perfect .0 tree is NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;
	size_t nodes = 0;
	size_t exponent = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	depth = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	exponent = (size_t)expon_recursion(2, depth + 1);
	return (exponent - 1 == nodes);
}

/**
*expon_recursion - returns the value of x raised to the power of y
*@x: the value to exponentiate
*@y: the power to raise x to
*Return: x to the power of y, or -1 if y is negative
*/

int expon_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * expon_recursion(x, y - 1));
}

/**
* binary_tree_size - measures the size of a binary tree
* @tree: tree to measure the size of
*
* Return: size of the tree
*         0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree whose height is to be measured
 *
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);
	l_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	r_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (max(l_height, r_height));
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
