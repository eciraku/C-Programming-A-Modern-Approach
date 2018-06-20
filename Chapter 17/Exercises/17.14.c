/*

void delete_from_list(struct node **list, int n)
{
	struct node *copy_list, *prev;

	copy_list = *list;

	if (copy_list != NULL && copy_list->value == n)
	{
		*list = copy_list->next;
		free(copy_list);
		return;
	}

	while (copy_list != NULL && copy_list->value != n)
	{
		prev = copy_list;
		copy_list = copy_list->next;
	}

	if (copy_list == NULL)
		return;

	prev->next = copy_list->next;
	free(copy_list);
}

*/