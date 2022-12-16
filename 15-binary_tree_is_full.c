#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node to check
 *
 * Return: 0 if tree is null or not full, 1 if full
 */

/* node has exactly 0 or 2 kids to be full */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
