#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n,m;
	char ele;
	
	for (int i = 0; i < t; ++i)
	{
		std::vector<int> v;
		cin>>n>>m;

		for (int j = 0; j < n*16; ++j)
		{
			//if((j+1)%4==0 && j!=0)
			cin>>ele;
			
			if(ele=='0')
				v.push_back(0);
			else
				v.push_back(1);
		


		}
		/*printf("\nresult=>\n");
		int count=0;

		for (int j = 0; j < v.size(); ++j)
		{
			printf("%d",v[j]);
			count++;
			if(count!=0 && count%4==0)
				printf("\n");
			if(count!=0 && count%16==0)
				printf("\n");

		}*/
		int type;
		int l,r;
		int pos;
		for (int j = 0; j < m; ++j)
		{
			cin>>type;
			if(type==1)
			{
				cin>>l>>r;
				int count=0;
				
				for (int k = (l-1)*16; k <=r*16-1 ; ++k)
				{
					if(v[k]==1)
						count++;
					

				}
				if(count%2==0)
					printf("Pishty\n");
				else
					printf("Lotsy\n");
			}
			else if(type==2)
			{
				cin>>pos;

				for (int k = (pos-1)*16; k <= pos*16-1 ; ++k)
				{
				
				cin>>ele;
				if(ele=='1')
					v[k]=1;
				else
					v[k]=0;

				}
			}


		}
		
	}
	return 0;
}