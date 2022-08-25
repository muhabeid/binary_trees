#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Pointer to pointer to the root node of the tree to check
 * Return: If tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);

	if (binary_tree_is_full(tree) && left_height == right_height)
		return (1);
	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: Is the pointer to the binary tree
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_l, size_r, total;

	if (!tree)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);
	total = size_l + size_r;
	return (total + 1);
}

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
