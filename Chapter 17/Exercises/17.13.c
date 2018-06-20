/*

The special cases are two:
1. The while loop should also check for the end of the list (cur != NULL)
2. The statements after the while loop should take into account that the element in the new_node
   can be inserted at the beginning of the list (prev == NULL)

struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
	struct node *cur = list, *prev = NULL;
	while (cur->value <= new_node->value && cur != NULL)
	{
		prev = cur;
		cur = cur->next;
	}

	if (prev == NULL)
	{
		new_node->next = cur;
		return list;
	}

	prev->next = new_node;
	new_node->next = cur;
	return list;
}

When the element to be inserted is at the end of the list there is no need for any extra
if statements, since the three statements (after the if) will be correct even when cur == NULL

*/