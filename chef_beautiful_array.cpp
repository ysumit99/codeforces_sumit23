#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n;
	int ele;

	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		int flag=0;
		int temp;
		cin>>ele;
		temp = ele;

		for (int j = 1; j < n; ++j)
		{
			cin>>ele;
			if(ele>=temp)
				flag=1;
			temp = ele;


		}

		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}