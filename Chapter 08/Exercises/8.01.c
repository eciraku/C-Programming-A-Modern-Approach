// It is an inferior technique because if you decide to latter change the type of the array a
// then you should also remember to change it in the given expression. But that is something which can easily
// be overlooked especially if it is present in more than one place. While with the sizeof(a) / sizeof(a[0]) 
// there is no such need.