#include "vector_algos.h"
#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main() {
	auto v = read_int_vector();

	cout << "Sum " << sum(v) << endl;
	cout << "Average " << average(v) << endl;
	cout << "For elements greater than 5: ";
	for (auto e : filter_greater_than(v, 5))
		cout << e << "  ";
	cout << endl;
	cout << "Enter any key to exit: ";
	getchar();
	return 0;
}