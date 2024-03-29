#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a nd asright-child
 *                            of a second bintree.
 * @parent: ptr to the nd to insert the r-child.
 * @value: val to store in nnode.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - ptr tonnode.
 *
 * Description: when parent has an rchild, the nnode
 *              takes its place and the old rchild is set as
 *              the rhild of nnode.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
