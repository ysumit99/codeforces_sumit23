#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	vector<int> v;

	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i+1);
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",v[i]);
	}



	random_shuffle(v.begin(),v.end());

	//int i;
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",v[i]);
	}
	return 0;
}