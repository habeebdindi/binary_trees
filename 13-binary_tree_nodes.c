#include "binary_trees.h"
/**
* binary_tree_nodes - function counts no of nodes in tree with at least a child
* @tree: pointer to root node of tree
*
* Return: returns number of nodes or 0 if none is found
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left)
		count += binary_tree_nodes(tree->left);

	if (tree->right)
		count += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (count + 1);
	else
		return (count);

}
