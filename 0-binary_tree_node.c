#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: New node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	/* Allocate memory for a new binary tree */
	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	/* Initialize the fields of the new node */
	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
