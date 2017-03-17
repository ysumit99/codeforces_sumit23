#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n,r,g;
	cin>>n>>r>>g;
	int max;

	if(g==0)
	{
		max=r-n+1;
	}
	else if(r==0)
	{
		max=g-n+1;
	}
	else{

		if(n<g)
		{
			max=g/n;
			max+=g%n;
		}

		else
		}

		return 0;
	
}