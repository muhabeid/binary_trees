#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: a pointer to the root node of the tree to check.
 * Return: Nothing, it is a void function :D
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int n = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		n = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
		return (n == 1);
	}
	return (0);
}
