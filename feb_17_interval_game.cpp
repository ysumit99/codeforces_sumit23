//code chef feb long contest interval game "INTERVAL"
//author:sumit yadav 04-02-2016 12:40pm
#include <bits/stdc++.h>

using name space std;

int main()
{
	int t;

	int i,n,m,j,k;
	long long int ai,bi;
	vector<long long int> v1;
	vector<long long int> v2;
	vector<long long int>temp;


	vector<long long int>::iterator first ;

	vector<long long int>::iterator last ;

	vector<long long int>::iterator tfirst ;

	vector<long long int>::iterator tlast ;

	vector<long long int>::iterator t ;	
	cin>>t;



	for (i = 0; i < t; ++i)
	{
		cin>>n>>m;
		int chance=0;


		for  (j = 0; j < n; ++j)
		{
			cin>>ai;
			v1.push_back(ai);

		}
		for (j = 0; j < m; ++j)
		{
			cin>>bi;
			v2.push_back(bi);


		}


		

		//vec1.clear()
		//int p=0; //vector v2's pointer
		int sum=0;

		int turns=v2.size()

		int tsum = 0;
		for(k=0;k<turns;k++)
		{
			
			int t2sum=0;
			int new_size_a = v2.at(k);
			int y=0;
			int new_size_a_copy = new_size_a;
			int limit;
			
			//limit = last
			tlast = v1.(y+new_size_a-1);
			while(tlast!=vec1.end())
			{
				tfirst = v1.y;
				tlast = v1.(y+new_size_a-1);
				t2sum = accumulate(tfirst, tlast, 0);
				if(t2sum>=tsum)
					{
						tsum = t2sum;
						first = tfirst;
						last = tlast;
					}
				tfirst++;
				tlast++;
			}
			--tfirst;
			--tlast;
			if(k%2==0)
				tsum+=t2sum;
			else 
				tsum-=t2sum;
			temp = v1(tfirst,tlast);
			vec1.erase();
			vec1 = temp;



		}
		
	}
	
	return 0;
}