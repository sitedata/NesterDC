/* KallistiOS 1.1.8

   dc/fmath.c
   (C)2001 Andrew Kieschnick
*/

#include <dc/fmath.h>

CVSID("fmath.c,v 1.1.1.1 2002/10/09 13:59:14 tekezo Exp");

/* Returns sin(r), where r is [0..2*PI] */
float fsin(float r) {
	return __fsin(r);
}

/* Returns cos(r), where r is [0..2*PI] */
float fcos(float r) {
	return __fcos(r);
}

/* Returns tan(r), where r is [0..2*PI] */
float ftan(float r) {
	return __ftan(r);
}

/* Returns sin(d), where d is [0..65535] */
float fisin(int d) {
	return __fisin(d);
}

/* Returns cos(d), where d is [0..65535] */
float ficos(int d) {
	return __ficos(d);
}

/* Returns tan(d), where d is [0..65535] */
float fitan(int d) {
	return __fitan(d);
}

/* Returns sqrt(f) */
float fsqrt(float f) {
	return __fsqrt(f);
}

/* Returns 1.0f / sqrt(f) */
float frsqrt(float f) {
	return __frsqrt(f);
}

