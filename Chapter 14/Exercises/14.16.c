#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

IDENT(foo)

// After IDENT(foo) is called we have:
// PRAGMA(ident #foo) -> PRAGMA(ident "foo")
// PRAGMA(ident "foo") -> _Pragma(#(ident "foo"))
// _Pragma(#(ident "foo")) -> _Pragma("ident \"foo\"")
// _Pragma("ident \"foo\"") -> #pragma ident "foo"