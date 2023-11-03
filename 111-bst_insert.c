#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree (BST).
 * @tree: A double pointer to the root node of the BST.
 * @value: The value to insert in the tree.
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *current;

	if (!tree)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (!new_node)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = new_node;
		return (new_node);
	}

	current = *tree;
	while (current)
	{
		if (value < current->n)
		{
			if (current->left == NULL)
			{
				current->left = new_node;
				new_node->parent = current;
				return (new_node);
			}
			current = current->left;
		}
		else if (value > current->n)
		{
			if (current->right == NULL)
			{
				current->right = new_node;
				new_node->parent = current;
				return (new_node);
			}
			current = current->right;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}

	return (new_node);
}
