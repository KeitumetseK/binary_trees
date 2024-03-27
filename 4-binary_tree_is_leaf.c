#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determines if a node is a leaf in a binary tree.
 * @node: Pointer to the node to be checked.
 *
 * Return: If the node is a leaf - Returns 1.
 *         Otherwise - Returns 0.
 *
 * Description: This function checks if the given node is a leaf node
 *              in the binary tree. A leaf node is a node that has
 *              no children (neither left nor right child).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
