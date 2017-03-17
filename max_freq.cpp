#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int n,m,i,ele,temp,l,r,k,max_count=1;
	vector<long long int> v;

	long long int count=0,j,x;
	scanf("%lld %lld",&n,&m);

	for (i = 0; i < n; ++i)
	{
		scanf("%lld",&ele);
		/*if(i==0)
			{	
				count = 1;
				max_count = 1;

			}
		else if(i!=0 && ele == temp)
			{	count++;
				if(count >= max_count)
					max_count = count;	
			}
		else if(i!=0 && ele != temp)
			{
				count = 1;

			}
		temp = ele;*/

		
		v.push_back(ele);



	}

	/*std::vector<long long int>::iterator it;
	for(it=v.begin();it<v.end();it++)
		cout<<"ele-> "<<*it<<"\t";*/
	/*cout<<"count:-> "<<count<<endl;
	cout<<"max_count:-> "<<max_count<<endl;*/
	
	for(j=0;j<m;j++)
	{
		scanf("%lld %lld %lld",&l,&r,&k);
		long long int max_c=1;
		long long int final_answer = 1;
		int flag = 0;
		//int t_flag=0;
		int remain = r-l+1;

		/*if(k>max_count)
		{
			printf("-1\n");
			//t_flag = 1;
			continue;
		}*/

		/*if(k==1)
		{
			printf("%d\n",v[l-1]);
		}*/



		//else 
		//{
		for(x=l-1;x<=r-1;x++)
		{
			if(x==l-1)
			{

				if(k==1)
					{
						printf("%lld\n",v[x]);
						flag = 1;
						break;
					}

			}

			else if(v[x]==v[x-1])
			{
				max_c++;
				if(max_c >=final_answer)
					final_answer = max_c;
				if(final_answer >=k)
				{
					printf("%lld\n",v[x]);
					flag = 1;
					break;
					
				}

			}
			else if(v[x]!=v[x-1])
			{
				max_c = 1;

			}
			remain--;

			if(remain < k - final_answer)
			{
				flag = 1;
				printf("-1\n");
				break;
			}
		}
		//if(t_flag!=1)
		//{
			if(flag!=1)
			{
				
					printf("-1\n");
			}
		//}
		//}

	}

	


	return 0;
}