#include "binary_trees.h"
/**
 * binary_tree_is_root - check if given node is a root
 * @node: given node
 *
 * Description: Checks if given node is root node.
 *
 * Return: 1 if node is root otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
