bool has_zero(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (a[i] == 0)
			return true;
		else
			return false;
}

// The problem with the above function is that it checks only for the first element of the array.
// If the first element is 0 it returns true (as it should) but if the first element is not zero
// then it returns false, which cannot be done because we should check all elements of the array
// not just the first. 
// We can fix the program by removing the else in the above code. If we remove the else then 
// the program will check to see if there is any 0 in the array, if there is no 0 then it returns
// false. So it returns false only after having checked all the elements of the array.

bool has_zero(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (a[i] == 0)
			return true;

	return false;
}