#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent tree
 * @value: int value
 * Return: pointer to new node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
