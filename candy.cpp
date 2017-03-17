#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;
	//std::vector<int> v;
	int temp;
	temp=n;
	int ele;
	int count=0;
	for (int i = 0; i < t; ++i)
	{
		/* code */
		cin>>ele;
		//v.push_back(ele);
		if(i!=t-1)
		{
			n-=ele;
			if(n<5)
			{ 
				count+=temp-n;
				n=temp;
			}
		}



	}
	printf("%d\n",count);


	return 0;
}