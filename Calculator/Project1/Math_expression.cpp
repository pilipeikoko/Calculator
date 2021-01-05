#include "Math_expression.h"

int Math_expression::compute_value(string line)
{
	remove_spaces(line);
	Expression_tree tree;
	tree.build_tree(line);
	return tree.compute_value();
}
