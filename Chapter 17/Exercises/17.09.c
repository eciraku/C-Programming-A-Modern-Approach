/*
	x is a structure; a is a member of that structure
	(&x)->a is the same as x.a

	As we know x->a is the same as (*x).a
	Then &x->a will be (*(&x)).a = x.a
	So, yes the two expressions are equivalent.
*/