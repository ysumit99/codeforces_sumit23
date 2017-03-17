#include <bits/stdc++.h>
using namespace std;
int main()
{


int n,m;
int i,j;
int t;
int l,r,k;

vector<int> v;
vector<int>::iterator it;
scanf("%d %d",&n,&m);

for (int i = 0; i <n; ++i)
{
	//cin>>t;
	scanf("%d",&t);

	v.push_back(t);

}

/*for(it=v.begin();it<v.end();it++)
	cout<<*it<<endl;*/

for (int i = 0; i < m; i++)
{
	//cin>>l>>r>>k;
	scanf("%d %d %d",&l,&r,&k);

	int remain=r-l+1;
	int final_answer=0;
	int max_count=0;
	int trap = 0;
	int success = 0;
	for(j=l-1;j<=r-1;j++)
	{
		
		if(j==l-1)
			{
				max_count=1;
				if(max_count>final_answer)
					final_answer = max_count;
				/*remain--;
				
				if((remain+final_answer)<k)
				{
					//cout<<-1<<endl;
					printf("-1\n");
					trap=1;
					break;
				}*/
				if(final_answer > k)
				{
					//cout<<v[j]<<endl;
					printf("%d\n",v[j]);
					success = 1;
					break;
				}
				//remain--;

		

			}
	else if(j!=l-1 && v[j]==v[j-1])
	{
		max_count++;
		if(max_count>final_answer)
					final_answer = max_count;
		/*remain--;
		
		if((remain+final_answer)<k)
		{
			//cout<<-1<<endl;
			printf("-1\n");
			trap=1;
			break;
		}*/
		if(final_answer > k)
				{
					//cout<<v[j]<<endl;
					printf("%d\n",v[j]);
					success = 1;
					break;
				}
		//remain--;

	}

	else if(v[j]!=v[j-1])
	{
		max_count=1;
		if(max_count>final_answer)
					final_answer = max_count;
		/*remain--;
		
		if((remain+final_answer)<k)
		{
			//cout<<-1<<endl;
			printf("-1\n");
			trap=1;
			break;
		}
		//remain--;*/

	}

	}

/*j--;
	if(trap!=1 && success==0)
		if(final_answer > k)
			printf("%d\n",v[j]);*/
	if(success!=1)
		printf("-1\n");


	

	 





	}





	return 0;
}