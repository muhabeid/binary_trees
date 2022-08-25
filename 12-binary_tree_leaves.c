#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavesR = 0;
	size_t leavesL = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leavesL = binary_tree_leaves(tree->left);
	leavesR = binary_tree_leaves(tree->right);
	return (leavesL + leavesR);
}
