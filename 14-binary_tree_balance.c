#include "binary_trees.h"
int max(int num1, int num2);
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor, calculated using absolute value and
 * 0 if tree is NULL.
 */

/* conpile this program with 9-binary_tree_height.c */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (!tree)
		return (0);
	l_height = tree->left ? (int)binary_tree_height(tree->left) : -1;
	r_height = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (l_height - r_height);
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
