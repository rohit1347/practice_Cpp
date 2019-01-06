#pragma once
#include <vector>

using namespace std;

vector<int> read_int_vector();
vector<int> sort(vector<int> v); //Quicksort
bool binary_search(vector<int> v, int x);
int sum(vector<int> v);
int average(vector<int> v);
vector<int> filter_greater_than(vector<int> v, int x);
