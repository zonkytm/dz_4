#include "function.h"



void find_n_m(double a, double b, double* n, double* m) {

	if (a >= b)
	{
		*n = pow(a - b, ((double)1 / (double)3));
	}
	else if (a < b)
	{
		*n = pow(a, 2) + ((a - b) / sin(a * b));
	}

	if (*n < b)
	{
		*m = ((*n + a) / (-b)) + pow((pow(sin(a), 2) - cos(*n)), (double)1 / (double)2);
	}
	else if (*n == b) {
		*m = pow(b, 2) + tan(*n * a);

	}
	else if (*n > b) {
		*m = pow(b, 3) + (*n * pow(a, 2));
	}
}