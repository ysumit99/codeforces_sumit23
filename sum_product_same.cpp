#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	std::vector<int> v;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		/* code */
		int n;
		cin>>n;
		int ele;
		for (int j = 0; j < n; ++j)
		{
			cin>>ele;
			v.push_back(ele);



		}
int sum=0,pro=1;
int count=0;
		for (int j = 0; j < n ; ++j)
		{ 
			for (int k = j; k < n; ++k)
			{
					sum+=v[k];
					pro*=v[k];
					
					
					if(sum==pro)
						count++;

				
			}
			sum=0;
			pro=1;
		}
		printf("%d\n",count);
		v.clear();
	}
	return 0;
}