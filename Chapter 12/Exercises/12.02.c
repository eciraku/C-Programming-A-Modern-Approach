// middle = (low + high) / 2;

// It is illegal to perform addition of two pointers (You can perform subtraction, not addition)
// One way to fix it is to write the expression as follows:
// middle = low + (high - low) / 2;
// (high - low) / 2 is an integer so you can add it to a pointer