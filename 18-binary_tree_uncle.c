#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to uncle node, if node is NUll return NULL
 * if node has no uncle, retur NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Function that finds the sibling of a node.
 * @node: is a pointer to the node to find the sibling.
 * Return: nothing, it is a void function :D
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->left != node)
		return (node->parent->left);

	if (node->parent->right != NULL && node->parent->right != node)
		return (node->parent->right);

	return (NULL);

}
