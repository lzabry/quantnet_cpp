/*
Defs.h
Define two macros:
MAX2 return the larger of the two numbers
MAX3 return the largest of the three numbers
*/



#ifndef Defs_h
#define Defs_h


#define MAX2(x,y)  ((x>y) ? x:y)
#define MAX3(x,y,z) ( MAX2(x,y)>MAX2(y,z) )? MAX2(x,y):MAX2(y,z)



#endif
