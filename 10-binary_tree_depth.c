#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: node whose depth is to be measured
 *
 * Return: returns depth of the tree on success and 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree->parent ? binary_tree_depth(tree->parent) + 1 : 0);
}
