#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the tree starting at the given node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ?
				left_height : right_height));
}

/**
 * binary_tree_is_avl - Check if a binary tree is a valid AVL Tree
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid AVL Tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (abs(left_height - right_height) <= 1 &&
			binary_tree_is_avl(tree->left) &&
			binary_tree_is_avl(tree->right))
	{
		return (1);
	}
	return (0);
}
