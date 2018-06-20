/*
	for (p = first; p != NULL; p = p->next)
		free(p);

	The problem is that when free(p) is eecuted the first time, then 
	the expression p = p->next will be meaningless, since p now is 
	a dangling pointer.
	We can fix it by creating e temporary variable:

	struct node *temp;
	
	p = first;
	while(p != NULL)
	{
		temp = p;
		p = p->next;
		free(temp);
	}
*/