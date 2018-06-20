// int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
// int *p = &a[1], *q = &a[5];

// (a) What is the value of *(p + 3)? (p + 3) is a pointer to the 5th element of the array
// 									  or the same as &a[4]. *(p + 3) is the value of that 
//									  element which is 14;
// (b) What is the value of *(q - 3)? Using the reasoning from above we get the value of
//									  *(q - 3) is 34;
// (c) What is the value of q - p?    The pointers both point to the same array, so it is 
//									  legal to perform addition and subtraction.
//									  The result of the difference will be the distance
//									  between the pointers, so 4;
// (d) Is the condition p < q true	  The condition is true;
//     or false?
// (e) Is the condition *p < *q		  The condition is false (Same as 5 < 2);
//	   true or false?  