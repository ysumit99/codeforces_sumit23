#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,ele;
	cin>>n;
	int arr[100001]={0};
	int count=0;
	int max_count=0;
	for (int i = 0; i < 2*n; ++i)
	{
		/* code */
		cin>>ele;
		if(arr[ele]==0)
		{
			count++;
			arr[ele]=1;
			if(count > max_count)
				max_count = count;
		}
		else{
			count--;
			if(count > max_count)
				max_count = count;
		}

	}
	printf("%d\n",max_count);
	return 0;
}