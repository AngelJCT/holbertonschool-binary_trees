#include "binary_trees.h"
/**
 *binary_tree_insert_left-function to insert a node as a left-child of another node
 *@parent: pointer to parent node to insert the left-child in
 *@value: value to store in the new node
 *Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;

	if (parent->left != NULL)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	parent->left = temp;
	return (temp);
}
