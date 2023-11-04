#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Our own functions */
void binary_tree_print(const binary_tree_t *tree);
void _binary_tree_delete(binary_tree_t *tree);

/**
 * _print_array - Prints an array of integers
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 */
void _print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (i)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	bst_t *root;
	int array[] = {
		704, 309, 995, 739, 526, 294, 783, 645, 11, 775,
		689, 452, 390, 770, 189, 369, 300, 721, 891, 6,
		225, 298, 846, 549, 118, 278, 124, 867, 217, 468,
		804, 543, 876, 65, 179, 2, 382, 568, 321, 768,
		56, 422, 586, 574, 533, 148, 707, 701, 715, 735
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	root = array_to_bst(array, size);

	_print_array(array, size);
	binary_tree_print(root);
	_binary_tree_delete(root);
	return (0);
}
