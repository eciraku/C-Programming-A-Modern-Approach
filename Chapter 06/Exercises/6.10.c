/*

While statement:

while (…) {
  …
  continue;
  …
}
The equivalent code using goto would have the following appearance:

while (…) {
  …
  goto loop_end;
  …
  loop_end: ;   // null statement
}

*/