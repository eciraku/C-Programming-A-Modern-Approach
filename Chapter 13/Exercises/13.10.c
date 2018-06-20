char *duplicate(const char *p)
{
	char *q;

	strcpy(q, p);
	return q;
}

// The problem with the above function is that the variable q is not initialized.
// So, q points nowhere in particular and we are trying to assign it the value in 
// the p variable. q must be initilized before it can be used.