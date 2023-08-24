#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling node.
 * @node: Node to find your sibling.
 * Return: Pointer to the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *s;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		s = node->parent->right;
	else
		s = node->parent->left;

	return (s);
}
