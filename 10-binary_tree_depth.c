#include "binary_trees.h"
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

/*The height of a 'node' in a binary tree is the largest number of edges in a path from a leaf node to a target node. The height of a 'binary tree' is the height of the root node in the whole binary tree. In other words, the height of a binary tree is equal to the largest number of edges from the root to the most distant leaf node.*/

/*The depth of a 'node' in a binary tree is the total number of edges from the root node to the target node. The depth of a 'binary tree' is the total number of edges from the root node to the most distant leaf node.*/

/*When calculating the depth of the whole binary tree, its equivalent  the height of a binary tree.*/
