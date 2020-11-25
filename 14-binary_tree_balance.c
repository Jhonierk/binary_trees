#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to root node of tree to measure
 * Return: balance factor left height minus right height, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = custom_binary_tree_height(tree->left);
	right = custom_binary_tree_height(tree->right);

	return (left - right);
}
