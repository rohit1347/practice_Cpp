#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n_arr,n_quer;
	cin>>n_arr>>n_quer;;
	vector<vector<int> > data(n_arr);
	std::vector<int> result(n_quer);
	// cout<<sizeof(data)/sizeof(int)<<endl;
	for(int i=0;i<n_arr;i++)
	{
		int size;
		cin>>size;
		// cout<<"Size as per input "<<size<<endl;
		std::vector<int> v(size);
		for(int j=0;j<size;j++)
		{
			cin>>v[j];
		}
		data[i]=v;
		// cout<<"Size of v "<<v.size()<<endl;
		data.push_back(v);
		// cout<<"Size as per o/p "<<data[i].size()<<endl;
	}
	for(int i=0;i<n_quer;i++)
	{
		int r,c;
		scanf("%d %d",&r,&c);
		result[i]=data[r][c];
	}
	for(int i=0;i<n_quer;i++)
	{
		cout<<result[i]<<endl;
	}
	return 0;
}