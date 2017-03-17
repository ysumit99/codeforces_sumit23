#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n;
	int ele;
	std::vector<int> v;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;

		for (int j = 0; j < n; ++j)
		{
			cin>>ele;
			v.push_back(ele);

		}
		sort(v.begin(),v.end());
		//int flag=0;
		int result;

		if(v[1]-v[0]!=1)
		{
			//flag=1;
			result = v[0];
			printf("%d\n",result);
			v.clear();
			continue;
		}
		if(v[n-1]-v[n-2]!=1)
		{
			//flag=1;
			result = v[n-1];
			printf("%d\n",result);
			v.clear();
			continue;
		}
		for (int k = 1; k < n; ++k)
		{
			if(v[k]-v[k-1]!=1)
			{
				result = v[k];
				printf("%d\n",v[k]);
				v.clear();
				break;
			}
		}

		
	}
	return 0;
}