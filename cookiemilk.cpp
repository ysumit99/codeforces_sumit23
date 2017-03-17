#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int t;
	cin>>t;

	int i,j;
	int n;
	string str;

	for (i = 0; i < t; ++i)
	
	{
		cin>>n;
		int flag=0;
		string temp="NULL";
		int flag2=0;
		for (j = 0; j < n; ++j)
		{
			//cin>>str;
			if(flag==0)
			{
				cin>>str;
				if(str[0]=='c' && n==1)
					{
						flag2=1;
						//break;
					}
				temp =  str[0];
				flag=1;
				continue;
			}
			//temp = str[0];
			cin>>str;
			if(str[0] == temp[0] && str[0]=='c')
			{
				flag2=1;
				//cout<<"broke here\n";
				//break;
			}
			temp = str[0];

			if(j==n-1 && str[0]=='c')
				flag2=1;

			
		}
		if(flag2==1)
			printf("NO\n");
		else
			printf("YES\n");
	}



	return 0;
}
