#include "binary_trees.h"
/**
 * binary_tree_height - binary tree height
 * @tree: tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int hleft;
	int hright;

	if (tree == NULL)
		return (-1);

	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);

	if (hleft > hright)
		return (hleft + 1);
	else
		return (hright + 1);
}

