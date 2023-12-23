#include "binary_trees.h"
/**
 * binary_tree_is_root - check if given node is a root
 * @node: given node
 * @return 1 if node is root otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node == root)
	{
		return (1);
	}
}
