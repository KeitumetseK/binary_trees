#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function performs a post-order traversal of the binary tree
 *              starting from the given root node. It calls the specified function
 *              for each node visited, passing the node's value to the function.
 *              In a post-order traversal, the left subtree is visited first,
 *              followed by the right subtree, and finally the current node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
