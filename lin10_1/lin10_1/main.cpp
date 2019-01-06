#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void reference_practice() {
	int x;
	
	cout << "enter x ";
	cin >> x;
	int& y = x;
	cout << endl;
	cout << "int x= " << x << endl;
	cout << "int& y=x " << "y= " << y << endl;
	y = 2;
	cout << "y=2 " <<"y= "<<y<< endl;
	cout << "x= " << x << endl;
	x = 3;
	cout << "x=3" << " x= " << x << endl;
	cout << "y= " << y << endl;
	auto z1 = y;
	auto& z2 = y;
	x = 8;
	cout << "auto z1=y= " << z1 << endl;
	cout << "auto& z2=y= " << z2 << endl;

	void takes_a_reference(int& i);
	cout << "x= " << x << endl;
	cout << "Takes reference: "<<endl;
	takes_a_reference(x);
	cout << "x= " << x << endl;

	int const& c = x;
	cout << "int const& c=x= " << c <<endl;
	x = 5;
	cout << "x= " << x << endl;
	cout << "c= " << c << endl;
	void takes_a_reference_to_const(int const& i);
	cout << "x= " << x << endl;
	cout << "takes_a_reference_to_const(x)" << endl;

	takes_a_reference_to_const(x);
	cout << "x= " << x << endl;


	void print(string const& str);
	cout << "print(\"I'm a string\")\n";
	print("I'm a string");
	cout << endl;
	
	double const& d = x;
	cout << "x= " << x << endl;
	cout << "d= " << d << endl;
	x = 13;
	cout << "x =13= "<< x << endl;
	cout << "d =" << d << endl;
}

void takes_a_reference(int& i) {
	cout << "i= " << i << endl;
	i = 7;
	cout << "i= "<< i << endl;
}

void takes_a_reference_to_const(int const& i) {
	cout << "i= " << i << endl;
}

void print(string const& str) {
	cout << "str= " << str << endl;
}

#include "vector_algos.h"

int main() {
	
	reference_practice();
	cout << endl;
	auto v = read_int_vector();
	auto sorted_v = sort(v);
	cout << "You entered: ";
	for (auto e : sorted_v)
		cout << e << " ";
	cout << endl;
	for (int i = 0; i < 50; i+=5) {
		if (binary_search(sorted_v, i))
			cout << i << " was there." << endl;
		else
			cout << i << " wasn't there." << endl;
	}
	
	std::cout << "Average: " << average(v) << "\n";
	std::cout << "Sum: " << sum(v) << "\n";

	std::cout << "Elements greater than 5:";
	for (auto e : filter_greater_than(v, 5))
		std::cout << " " << e;
	std::cout << endl;

	cout << "Enter any key to exit: ";
	getchar();
	return 0;
}