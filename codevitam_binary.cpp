#include <bits/stdc++.h>

using namespace std;

int main()
{

		
	int t;
	int i;
	long long unsigned int n;
	long long unsigned int a[10001]={-1};

		a[1] = 0;
		a[2] = 1;
	for(i=3;i<=10000;i++)
	{
		//scanf("%d",&n);
		
		
		
		 if(i>2)
			a[i]=i-2+a[i-1]*2;

	}
	scanf("%d",&t);
//long long unsigned int temp=power(2,n)-1
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		printf("%lld\n",a[n]);

	}
	return 0;
}