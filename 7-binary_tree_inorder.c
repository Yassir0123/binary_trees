#include "binary_trees.h"

/**
 * binary_tree_inorder - checks binary tree with in-order traversal.
 * @tree: ptr to rotnode of tree to traverse.
 * @func: A ptr to a fun to call for each nd.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
