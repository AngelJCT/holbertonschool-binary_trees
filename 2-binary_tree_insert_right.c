#include "binary_trees.h"
/**
 *binary_tree_insert_right-function to insert a node as right-child
 *@parent: pointer to the node to insert the right-child in
 *@value: value to store in the new node
 *Return: pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right != NULL) //substitute the right-child for the newnode if it has one already
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode; //set the newnod as the new right-child
	return (newNode);
}
