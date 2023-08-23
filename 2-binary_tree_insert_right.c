#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert node to the right in binary tree.
 * @parent: Pointer to the parent of the new node
 * @value: Value for new node
 * Return: New node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *newRight = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = calloc(1, sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;

	if (parent->right != NULL)
	{
		newRight = parent->right;
		new_node->right = newRight;
		new_node->left = NULL;
		newRight->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);

}
