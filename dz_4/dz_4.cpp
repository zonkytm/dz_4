#include "function.h"



int main() {


	double a = 4.8, b = -7.9, m = 0, n = 0;
	find_n_m(a, b, &n, &m);
	cout << "a= " << a << '\t' << "b= " << b << '\t' << "n= " << n << '\t' << "m= " << m << '\t' << endl;
}