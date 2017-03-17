#include <bits/stdc++.h>

using namespace std;
int main()
{
	//vector<int> v;
	int t,i,n,ele,result=0;

	//vector<int>::iterator it;

	scanf("%d",&t);

	for (int i = 0; i < t; ++i)
	{
		
		scanf("%d",&n);
		int flag=0;
		int paid=0,not_paid_since=0;

		for (int j = 0; j<n; ++j)
		{
			
			scanf("%d",&ele);
			if(ele==0 && flag==0)
				{
					not_paid_since = n-j;

					flag=1;

				}
			else if (ele==1)
				paid++;
			//v.push_back(ele);

		}

		result = (n-paid)*1000+100*(not_paid_since);
		printf("%d\n",result);
	}

	return 0;
}