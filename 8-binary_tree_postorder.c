#include "binary_trees.h"

/**
 * binary_tree_postorder - Print tree in postorder.
 * @tree: Pointer to root node.
 * @func: Function to call each node.
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}

}
