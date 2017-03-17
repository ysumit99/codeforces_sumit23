#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n;
	for (int i = 0; i < t; ++i)
	{
		/* code */
		cin>>n;
		int ele;
		int count_1=0;
		for (int j = 0; j < n; ++j)
		{
			
			/* code */
			for (int k = 0; k < n; ++k)
			{
				/* code */
				cin>>ele;
				if(ele==1)
					count_1++;

			}
			//2printf("\n");
		}
		
		if(count_1<=n)
		{
			printf("0\n");
			continue;
		}
		int remain = n-1;
		int sum=n;

		for (int j = 1; j < n; ++j)
		{
			
			//remain--;
			if(count_1>sum+(2*remain))
				sum+=2*remain;
			else
			{
				printf("%d\n",j);
				break;
			}

			remain--;

		}

	}
	return 0;
}