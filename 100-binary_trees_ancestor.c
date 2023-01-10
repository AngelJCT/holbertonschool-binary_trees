#include "binary_trees.h"
/**
 *binary_trees_ancestor-find the lowest common ancestor of two nodes
 *@t1: pointer to first node
 *@t2: pointer to second node
 *Return: pointer to lowest common ancestor node of two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *t1, const binary_tree_t *t2)
{
	int first_depth, second_depth, i;

	if (t1 == NULL || t2 == NULL)
		return (NULL);

	//call the helper function to calculate both nodes depth.
	first_depth = binary_tree_depth(t1);
	second_depth = binary_tree_depth(t2);

	//It checks wether the first node is deeper than the second node.If it is deeper, the function moves the first node up to the same level as the second node by following its parent pointers, using a for loop with i< first_depth - second_depth iterations.
	if (first_depth > second_depth)
	{
		for (i = 0; i < first_depth - second_depth; i++)
		{
			t1 = t1->parent;
		}
	}
	//It does the same as above but for the second node.
	else if (second_depth > first_depth)
	{
		for (i = 0; i < second_depth - first_depth; i++)
		{
			t2 = t2->parent;
		}
	}
	//Finally, the algorithm traverses the parent pointers of both nodes until it finds a common ancestor by using a while loop, once both pointers are pointing to the same node, it is returned as the LCA.
	while (t1 != t2)
	{
		t1 = t1->parent;
		t2 = t2->parent;
	}
	//this return statement means, that is returning a pointer type binary_tree_t  rather than a binary_tree_t structure. This a typecasting operation. Then this pointer, which is pointing to the LCA, is returned from the function.
	return ((binary_tree_t *)t1);
	//Typecasting is the explicit conversion of a value from one data type to another. It's a way to tell the compiler to treat a value as a different type than what it would normally be interpreted as.
	//For example, in the return statement of LCA function, the first variable is of type const binary_tree_t*, which is a pointer to a constant binary_tree_t structure. When it is casted to binary_tree_t* the compiler understands it as a pointer to a non-constant binary_tree_t structure, thus interpreting the value stored in the first variable as a pointer to a binary_tree_t structure.
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
