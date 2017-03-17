#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	int i,j;
	int n,s,ele;
	int total;
	for (i = 0; i < t; ++i)
	{
		total=0;
		
		cin>>n>>s;

		for (j = 0; j < n; ++j)
		{
			cin>>ele;
			total+=ele;

		}
		//printf("s=%d total=%d s-total=%d\n",s,total,s-total);
		
		if(s-total<=0)
			printf("No\n");
		else
		{
			if(s%2 == 0)
			{
				if(s-total >= s/2)
					printf("Yes\n");
				else
					printf("No\n");
			}
			else if(s%2 == 1)
			{
				if((s-total) > s/2)
					printf("Yes\n");
				else
					printf("No\n");
			}
		}

	}
	return 0;
}