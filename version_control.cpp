#include <bits/stdc++.h>

using namespace std;

int  main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	
	for (int i = 0; i < t; ++i)
	{
		/* code */
		int n,m,k;
		cin>>n>>m>>k;
		int ele;
		int arr[101]={0};

		for (int j = 0; j < m; ++j)
		{
			cin>>ele;
			arr[ele]++;

		}
		for (int j = 0; j < k; ++j)
		{
			cin>>ele;
			arr[ele]++;
		}
		int r1=0,r2=0;

		for (int j = 1; j <= n; ++j)
		{
			if(arr[j]==0)
				r2++;
			if(arr[j]==2)
				r1++;

		}

		printf("%d %d\n",r1,r2);

	}
	return 0;
}