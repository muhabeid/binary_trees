#include "binary_trees.h"
/**
 * binary_tree_ancestor - finds the uncle of a node
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two
 * given nodes, If no common ancestor was found, your function
 * must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int f_depth, s_depth;

	if (first == NULL || second == NULL)
		return (NULL);

	f_depth = binary_tree_depth(first);
	s_depth = binary_tree_depth(second);

	while (s_depth > f_depth)
	{
		second = second->parent;
		s_depth--;
	}
	while (f_depth > f_depth)
	{
		first = first->parent;
		s_depth--;
	}
	while (first != NULL && second != NULL)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: If tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
