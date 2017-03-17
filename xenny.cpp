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
		int e_x=0,e_y = 0;
		int o_x=0,o_y = 0;
		cin>>n;
		for (int j = 0; j < n; ++j)
		{
			cin>>ele;
			if(j%2==0)
				e_x+=ele;
			else
				o_x+=ele;
		}

		for (int j = 0; j < n; ++j)
		{
			cin>>ele;
			if(j%2==0)
				e_y+=ele;
			else
				o_y+=ele;
		}

		int opt1,opt2;
		opt1=e_x+o_y;
		opt2=o_x+e_y;

		int result;

		result = opt1 > opt2 ? opt2 : opt1;
		printf("%d\n",result);




	}
	return 0;
}