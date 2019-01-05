#include "vector_algos.h"
#include <iostream>
#include <cstdio>

int main() {
	auto v = read_int_vector();
	auto sorted_v = sort(v);
	cout << "You entered: ";
	for (auto e : sorted_v)
		cout << e << " ";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (binary_search(sorted_v, i))
			cout << i << " was there." << endl;
		else
			cout << i << " wasn't there." << endl;
	}
	cout << "Enter any key to exit: ";
	getchar();
	return 0;
}