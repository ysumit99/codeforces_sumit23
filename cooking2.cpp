#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n,k;
	char ele;
	std::vector<int> v;
	for (int i = 0; i < t; ++i)
	{
		cin>>n>>k;
		int count=1;
		int max_count=0;
		int pos;
		cin>>ele;
		if(ele=='1')
			v.push_back(1);
		else
			v.push_back(0);
		char temp;

		for (int j = 1; j < n; ++j)
		{
			/* code */
			temp=ele;
			cin>>ele;
			
		if(ele=='1')
			v.push_back(1);
		else
			v.push_back(0);

			if(ele==temp)
			{
				count++;
				if(count>max_count)
					{max_count=count;
					pos = j-max_count+1;
					}
			}
				else
				{
					count=1;
					if(count>max_count)
					{max_count=count;
					pos = j-max_count;
					}

				}
		

		}
			int tempo;
			int count_=1;
			int max_count_=1;
			int result;

		for (int j = 0; j < k; ++j)
		{
			
			
				if(v[pos+(pos/2)]==1)
					v[pos+(pos/2)]=0;
				else
					v[pos+(pos/2)]=1;
				tempo = v[0];
				for (int l = 1; l < n; ++l)
				{
					if(v[l]==tempo)
						{
							count_++;
							printf("count=%d\n",count_);
							if(count_>max_count_)
								{max_count_=count_;
								pos=l-max_count_;
								}	
						}
					else
					{
						count_=1;
						if(count_>max_count_)
							{max_count_=count_;
							pos=l-max_count_;
							}
					}	
						tempo=v[l];
						if(l==n-1)
							result=max_count_;
					
				}
				count_=1;
				max_count_=1;

			

		}
			
		printf("%d\n",result);
		v.clear();


	}

	return 0;
}