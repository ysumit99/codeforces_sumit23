#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;

	int t;
	t=n/2;
	int temp;
	temp=t;
	if(t%2==0)
	{
		if(t%k==0)
			printf("%d\n",t);
		else
		{
			if(t-t%k>=0)
				printf("%d\n",t+t%k);
			else
				printf("-1\n");
		}
	}
	else
	{
		t+=1;
		
		if(t%k==0)
			printf("%d\n",t);
		else
		{
			if(temp-t%k>0)
				printf("%d\n",temp+t%k);
			else
				printf("-1\n");
		}

	}
	return 0;
}