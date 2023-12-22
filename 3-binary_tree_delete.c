#include "binary_trees.h"
/**
 * binary_tree_delete - deletes entire binary tree
 * @tree: binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (node == NULL)
	{
		return;
	}

	binary_tree_delete(node->left);
	binary_tree_delete(node-right);
	free(node);
}
