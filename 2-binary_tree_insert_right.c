#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node of the right child to be created
 * @value: value to store in the new node
 *
 * Return: returns a pointer to the new node created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_r = malloc(sizeof(binary_tree_t));

	if (insert_r == NULL)
		return (NULL);
	if (!parent)
		return (NULL);

	insert_r->n = value;
	insert_r->parent = parent;
	insert_r->left = NULL;
	insert_r->right = parent->right;
	parent->right = insert_r;
	if (insert_r->right != NULL)
	{
		insert_r->right->parent = insert_r;
	}
	return (insert_r);
}
