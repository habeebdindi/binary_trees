#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: parent node of left child
 * @value: value to store in the new node
 *
 * Return: returns a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_l;

	if (parent == NULL)
		return (NULL);

	insert_l = malloc(sizeof(binary_tree_t));
	if (insert_l == NULL)
                return (NULL);

	insert_l->parent = parent;
	insert_l->n = value;
	insert_l->left = parent->left;
	insert_l->right = NULL;
	parent->left = insert_l;

	if (insert_l->left != NULL)
		insert_l->left->parent = insert_l;
	return (insert_l);
}
