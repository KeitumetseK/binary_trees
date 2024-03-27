#include "binary_trees.h"

/**
 * binary_tree_is_root - Determines if a node is the root of a binary tree.
 * @node: Pointer to the node to be checked.
 *
 * Return: If the node is the root - Returns 1.
 *         Otherwise - Returns 0.
 *
 * Description: This function checks if the given node is the root node
 *              of the binary tree. A root node is a node that has no parent.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
