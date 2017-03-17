#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	int n,k;
	char ele;
	std::vector<int> v;
	std::vector<int>::iterator it;
	for (int i = 0; i < t; ++i)
	{
		/* code */

		cin>>n>>k;
		int count=1;
		cin>>ele;
		char temp;

		for (int j = 1; j < n; ++j)
		{
			/* code */
			temp=ele;
			cin>>ele;
			if(ele==temp)
			{
				count++;
			}
			else
			{
				v.push_back(count);
				//printf("Element pushed=%d\n",count);
				count = 1;
			}



		}
		v.push_back(count);
		int s = v.size();
		int p_count=0;
		int tempo;
		for (int j = 1; j < s-1; ++j)
		{
			if(v[j]==2 && v[j-1]==1 && v[j+1]==1)
				{
					p_count++;
					
					

				}

		}
		for (int j = 3; j < s-1; ++j)
		{
			if(v[j]==2 && v[j-1]==1 && v[j+1]==1 && v[j-2]==2 && v[j-3]==1)
				p_count--;
		}
		//printf("Element pushed=%d\n",count);
		//printf("v[s-2]=%d\n", v[s-2]);
		sort(v.begin(),v.end());
		

		
//printf("pcount=%d\n",p_count);
//printf("%d %d %d\n",v[0],v[1],v[2]);

		//if(v[s-1]>2)
		//{
			for (int j = 0; j < k-p_count; ++j)
			{
				v[s-1]=v[s-1]/2;
				sort(v.begin(),v.end());
				if(v[s-1]==1)
					break;

			}

		
			printf("%d\n",v[s-1]);
		
		//}
		//else
			//printf("%d\n",v[s-1]);
		v.clear();
	}
	return 0;
}
