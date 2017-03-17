#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int t;
	cin>>t;

	int i,j;
	int n;
	string str;
	vector<int> v;
	for (i = 0; i < t; ++i)
	{
		
		cin>>n;
		for (j = 0; j < count; ++j)
		{
			cin>>str;
			if(str[0]=='c')
				v.push_back(1);
			else
				v.push_back(0);
		}
		//int flag=0;
		int flag2=0;
		if(n==1 && v[0]==1)
			flag2==1;
		else
		{
		for(j=1;j<n;j++)
		{
			if(v[j]==v[j-1] && v[j]==1)
				flag2=1;

		}
	}

	if(flag2==0)
		printf("YES\n");
	else
		printf("NO\n");

erase(v.begin(),v.end());
	}

	



	return 0;
}
