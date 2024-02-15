#include "binary_trees.h"
/**
 * binary_tree_delete - delete a node
 *@tree: binary_tree_t *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
