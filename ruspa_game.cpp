#include <bits/stdc++.h>

using namespace std;
int int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n;
	int ele;
	std::vector<int> v;

	for (int i = 0; i < t; ++i)
	{
		/* code */
		int sum=0;
		cin>>n;

		for (int j = 0; j <=n; ++j)
		{
			/* code */
			cin>>ele;
			v.push_back(ele);
			if(j==0)
				sum+=v[j];
			if(j!=0)
			{
				sum+=v[0]*ele;

			}
		}


	}
	return 0;
} 