#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	std::vector<int> v;
	int ele;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>ele;
			v.push_back(ele);

		}
	}

	sort(v.begin(),v.end());
	int count=0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ",v[count++]);
		}
		printf("\n");
	}
	return 0;
}