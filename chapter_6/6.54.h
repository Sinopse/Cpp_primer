// a function declarataion that takes two parameterss and
// returns an int
#include <vector>

int storeInt(int a, int b);

// various options how to explicitle specify
// the fucntion pointer return type


using PF = decltype(storeInt) *; // explicitly speciify a pointer return type
int (*pf)(int a, int b);	// with decltype(pf) as a return type
// pointer pf to a function

using PFF = int(*)(int, int);	/* PFF is a pointer type */


