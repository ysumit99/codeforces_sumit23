#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int n;
	std::vector<char> v;

	//v.push_back("a");


	//sort(v.begin(),v.end());

	//cout<<v[0];
	char ele;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		for (int j = 0; j <n ; ++j)
		{
			/* code */
			cin>>ele;
			v.push_back(ele);
		}
		sort(v.begin(),v.end());
		for (int j = 0; j <n ; ++j)
		{
			/* code */
			//cin>>ele;
			//v.push_back(ele);
			cout<<v[j];
		}
		cout<<endl;
		v.clear();
	}


	return 0;
}
