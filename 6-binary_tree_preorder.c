#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order Traversal.
 * @tree: ptr to rnode of tree to traverse.
 * @func: ptr to fun to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
