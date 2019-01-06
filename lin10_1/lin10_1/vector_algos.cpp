#include "vector_algos.h"
#include <string>
#include <iterator>
#include <iostream>

using namespace std;

vector<int> read_int_vector()
{
	int x;
	vector<int> v;
	cout << "Enter nums: \n";
	while (true) {
		while (cin >> x)
			v.push_back(x);
		if (cin.eof())
			break;
		cin.clear();
		string s;
		getline(cin, s);
		cout << "Ignoring " << s << endl;
	}
	cout << "EOF\n";
	return v;
}

vector<int>::iterator partition(vector<int>::iterator begin, vector<int>::iterator end) {
	auto pivot = begin++;

	for (; begin != end; ++begin) {
		if (*pivot > *begin) {
			std::swap(*pivot, *begin);
			++pivot;
			std::swap(*pivot, *begin);
		}
	}

	return pivot;
}

vector<int> sort(vector<int> v)
{
	vector<int>::iterator partition(std::vector<int>::iterator begin, vector<int>::iterator end);
	void sort_impl(vector<int>::iterator begin, vector<int>::iterator end);
	sort_impl(v.begin(), v.end());
	return v;
}

void sort_impl(vector<int>::iterator begin, vector<int>::iterator end) {
	if (end - begin <= 1)
		return;

	auto pivot = partition(begin, end);
	sort_impl(begin, pivot);
	sort_impl(pivot + 1, end);
}

bool binary_search(vector<int> v, int x)
{
	auto bottom = v.begin();
	auto top = v.end();
	while (top != bottom) {
		auto mid = bottom + (top - bottom) / 2;
		if (*mid < x)
			bottom = mid + 1;
		else if (*mid > x)
			top = mid;
		else return true;
	}
	return false;
}

int sum(vector<int> v)
{
	int result = 0;
	for (auto e : v)
		result += e;
	return result;
}

int average(vector<int> v)
{
	int size = v.size();
	int average = sum(v) / size;
	return average;
}

vector<int> filter_greater_than(vector<int> v, int x)
{
	vector<int> result;
	for (auto e : v) {
		if (e > x)
			result.push_back(e);
	}
	return result;
}
