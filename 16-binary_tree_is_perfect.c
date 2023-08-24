#include "binary_trees.h"

int findDepth(const binary_tree_t *node);
int is_perfect(const binary_tree_t *tree, int d, int level);

/**
 * findDepth - Calculate depth of the tree.
 * @node: Tree to calculate depth.
 * Return: Depth
 */

int findDepth(const binary_tree_t  *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * is_perfect - Check for full tree.
 * @tree: Tree to check full.
 * @d: Depth
 * @level: Level
 * Return: 1 if it is full, 0 if not
 */

int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (d == level + 1)
			return (1);
		else
			return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}


/**
 * binary_tree_is_perfect - Calculate if perfect tree.
 * @tree: Tree to  calulcate if perfect.
 * Return: 1 if it is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0, d = 0;

	d = findDepth(tree);
	result = is_perfect(tree, d, 0);

	return (result);
}
