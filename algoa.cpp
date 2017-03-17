#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;
	int n;
	int ele;
	vector<int> v;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		//vector<int> v;
		int count=0;


		for (int j = 0; j < n; ++j)
		{
			cin>>ele;
			v.push_back(ele);

		}
		/*cout<<"***";
		for (int j = 0; j < n; ++j)
		{
			cout<<v[j]<<endl;

		}
		cout<<"***";*/

		for (int i = 0; i < count; ++i)
		{
			/* code */
		
		//int val=0;
		while(k!=n && count<=n)
		{
			if(v[k]+k<=n && v[k]+k>=0)
				{
					
					
					k+=v[k];
					count++;
					
					//printf("k=%d\n",k);
				}
			else
			{
				k++;
				count++;
				//printf("k=%d\n",k);
			}


		}

	}
		if(count<=n)
			printf("%d\n",count);
		else
			printf("%d\n",n);
		v.clear();

	}
	return 0;
}