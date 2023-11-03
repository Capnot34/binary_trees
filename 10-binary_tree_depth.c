#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node
 * in a binary tree
 *
 * @tree: a pointer to the node to measure the depth
 * Return: if null return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	 return (binary_tree_depth(tree->parent) + 1);
}
