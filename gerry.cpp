#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
	int t,o1,o2,n;
	int i,j,k;
	int ele;
 
 
	scanf("%d",&t);
	vector<int> v;
	vector<int>::iterator it;
 
	for (int i = 0; i < t; ++i)
	{
		int one_count=0,zero_count = 0;
 
		scanf("%d %d",&o1,&o2);
		n = o1*o2;
 
		int count = 0,max_count = 0;
		int temp;
		int flag=0;
		int first_excp=0;
		int last_excp=0;
		int flag2=0;
 
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&ele);
			v.push_back(ele);
			if(ele == 0)
				zero_count++;
			else
				one_count++;
			
 
			/*if(ele == 1)
				{*/
					if(j==0)
					{
						count = 1;
						if(count >= o2/2+1 && ele==1)
								max_count--;
						else if(count >= o2/2+1 && ele==1)
								max_count++;
						/*flag2 = 1;
						first_excp=1;*/
						
					}
 
					else if(ele == temp)
					{	count++;
						if(count >= o2/2+1 && ele == 1)
							max_count--;
						else if(count >= o2/2+1 && ele == 0)
							max_count++;
						/*if(flag2==1 && flag==0)
							first_excp++;*/	
					}
					else if(ele != temp)
						{	
							flag2=0;
							flag=1;
							count = 1;
							if(count >= o2/2+1 && ele == 1)
								max_count--;
							else if(count >= o2/2+1 && ele == 0)
								max_count++;
 
						}
 
 
				//}//
			/*else if(ele == 0)
				count = 0;*/	
			temp = ele;
			/*if(max_count >= o1/2+1)
			{
				flag = 1;
				break;
			}*/
 		}
			
		//}
		//cout<<"count->"<<max_count<<endl;
		
		/*it = v.end();
		--it;
		while(*it==1)
			{   
				last_excp++;
				--it;
			}
			/*if(first_excp+last_excp >=o2/2+1)
				max_count++;*/
 
		if(one_count > zero_count)
			printf("1\n");
		else
		{
		if(zero_count - one_count > 1)
			printf("0\n");
		else if(max_count >= o1/2+1)
			printf("1\n");
		else
			printf("0\n");
		}
 
		v.erase(v.begin(),v.begin()+n);
	}
 
 
 
	return 0;
}  