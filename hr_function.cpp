#include<iostream>

using namespace std;

int getGreatest(int a, int b, int c, int d)
{
	int great=a;
	great=(great<b)?b:great;
	great=(great<c)?c:great;
	great=(great<d)?d:great;
	return great;
}

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int greatest=getGreatest(a,b,c,d);
	cout<<greatest<<endl;
	return 0;
}