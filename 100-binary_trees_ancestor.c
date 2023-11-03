#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest
 * common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common
 * ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first == second->parent ||
			(!first->parent && binary_trees_ancestor(second, first)))
		return ((binary_tree_t *)first);
	if (second == first->parent || (!second->parent &&
				binary_trees_ancestor(first, second)))
		return ((binary_tree_t *)second);

	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);

	binary_tree_t *ancestor = binary_trees_ancestor(first, second->parent);

	return (ancestor ? ancestor : binary_trees_ancestor(first->parent, second));
}
