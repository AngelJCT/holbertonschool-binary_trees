#include "binary_trees.h"
/**
 *binary_t_lca-find the lowest common ancestor of two nodes
 *@t1: pointer to first node
 *@t2: pointer to second node
 *Return: pointer to lowest common ancestor node of two given nodes
 */
binary_tree_t *binary_t_lca(const binary_tree_t *t1, const binary_tree_t *t2)
{
	int first_depth, second_depth, i;

	if (t1 == NULL || t2 == NULL)
		return (NULL);

	first_depth = binary_tree_depth(t1);
	second_depth = binary_tree_depth(t2);

	if (first_depth > second_depth)
	{
		for (i = 0; i < first_depth - second_depth; i++)
		{
			t1 = t1->parent;
		}
	}
	else if (second_depth > first_depth)
	{
		for (i = 0; i < second_depth - first_depth; i++)
		{
			t2 = t2->parent;
		}
	}
	while (t1 != t2)
	{
		t1 = t1->parent;
		t2 = t2->parent;
	}
	return ((binary_tree_t *)t1);
}
/**
 *binary_tree_depth-function to measure the depth of a node
 *@tree: pointer to the node to measure
 *Return: depth of given node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}

