//Codechef Feb Cook-off 2017
//Author: Sumit Yadav 20-02-2017 15:35 
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t_c;
	int n,k;
	int i,j;


	scanf("%d",&t_c);

	for (int i = 0; i < t_c; ++i)
	{
		scanf("%d %d",&n,&k);

		int ti,di;
		int total=0;
		int amount=0;
		int flag = 0;


		for (int j = 0; j < n; ++j)
		{
			scanf("%d %d",&ti,&di);
			 total+=ti;
			 if(total<=k)
			 	amount+=0;
			 else if(total > k && flag!=1)
			 {
			 	amount+=(total - k)*di;
			 	flag=1;
			 }
			 else
			 {
			 	amount+=ti*di;
			 }

			


		}
		printf("%d\n",amount);

	}



	return 0;
}