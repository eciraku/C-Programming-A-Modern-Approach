/*
	struct node *find_last(struct node *list, int n)
	{
		struct node *copy_list, *last;

		last = NULL;
		for (copy_list = list; copy_list != NULL; copy_list = copy_list->next)
		{
			if (copy_list->value == n)
				last = copy_list;
		}

		return last;
	}
*/