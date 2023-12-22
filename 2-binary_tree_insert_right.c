#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right child of another node
 * @parent: parent node
 * @value: value of node
 * Return: return pointer to create node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new NULL)
	{
		return (NULL);
	}

	new-> = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent == NULL)
	{
		free(new);
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;
	return (new);
}
