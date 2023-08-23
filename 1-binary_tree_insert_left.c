#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node for the left in binary tree
 * @parent: is a binary tree
 * @value: value the node
 * Return: binary tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *newLeft = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = calloc(1, sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;

	if (parent->left != NULL)
	{
		newLeft = parent->left;
		new_node->left = newLeft;
		new_node->right = NULL;
		newLeft->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);

}
