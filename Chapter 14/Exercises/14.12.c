#define M 10

// (a) #if M			- Not fail
// (b) #ifdef M			- Not fail
// (c) #ifndef M		- Fail
// (d) #if defined(M)	- Not fail
// (e) #if !defined(M)	- Fail