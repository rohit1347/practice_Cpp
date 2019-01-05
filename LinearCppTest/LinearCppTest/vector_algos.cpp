#include<iostream>
#include<vector>
#include "vector_algos.h"

using namespace std;

vector<int> read_int_vector()
{
	cin.clear();
	int x;
	vector<int> result;
	cout << "Enter nums: \n";
	while (true) {
		while (cin >> x)
			result.push_back(x);
		if (cin.eof())
			break;
		cin.clear();
		string s;
		getline(cin, s);
		cout << "Ignoring " << s << endl;
	}
	cout << "EOF \n";
	return result;
}

int sum(vector<int> v)
{
	int result=0;
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
