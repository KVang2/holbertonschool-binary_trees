#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node as left child of another node
 * @parent: parent
 * @value: value
 * Return: reutrn pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent == NULL)
	{
		return(NULL);
	}

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = newNode;
	}
	parent->left = new;
	return (new);

}
