#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int t,flag=0;
	t = n;
	//int temp;
	//temp = m;
	//int count = 0;

	for (int i = 0; i < n; ++i)
	{
		if((t+m)>=n)
			t=n;
		else
			t+=m;
		t = t - (i+1);
		if(t <= 0 )
		{
			printf("%d\n",i+1);
			flag = 1;

			break;
		}

		

	}
	return 0;
}