#include<iostream>

using namespace std;

int main()
{
	int size;
	cin>>size;
	int data[size];
	for(int i=0;i<size;i++)
	{
		cin>>data[i];
	}
	for(int i=size-1;i>=0;i--)
	{
		cout<<data[i]<<" ";
	}
	return 0;
}