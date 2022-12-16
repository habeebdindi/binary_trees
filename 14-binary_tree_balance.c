#include "binary_trees.h"
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
