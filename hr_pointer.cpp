#include<iostream>
#include<stdlib.h>

using namespace std;

void update(int *a, int *b)
{
	int temp=*a;
	*a+=*b;
	*b=abs(temp-*b);
}

int main()
{
	int a,b;
	int *pa=&a;
	int *pb=&b;
	scanf("%d %d",&a,&b);
	update(pa,pb);
	cout<<*pa<<endl<<*pb<<endl;
	return 0;
}