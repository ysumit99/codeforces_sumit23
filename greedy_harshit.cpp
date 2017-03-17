#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n;
	std::vector<int> v;
	std::vector<int>::iterator front;
	std::vector<int>::iterator end;
	int count;
	int ele;
	int sum;
	for (int i = 0; i < t; ++i)
	{
		/* code */
		cin>>n;

		for (int j = 0; j < n; ++j)
		{
			cin>>ele;
			v.push_back(ele);

		}

		front = v.begin();
		end = v.end();
		end--;
		count = 0;
		sum=0;

		for(int k=0;k<n;k++)
		{
			if(*front <= *end)
			{
				count++;
				sum+=count*(*front);
				//cout<<"front = "<<*front<<endl;
				front++;
				
			}
			else if(*front > *end)
			{
				count++;
				sum+=count*(*end);
				//cout<<"end = "<<*end<<endl;
				end--;
				
			}
		}
		printf("%d\n",sum);
		v.clear();

	}


	return 0;
}