#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin>>n;
	int a,b;

std::vector<int> v1;
std::vector<int> v2;
std::vector<int> v3;
std::vector<int> v4;
	for (int i = 0; i < n; ++i)
	{
		
		cin>>a>>b;
		v1.push_back(b);
		v3.push_back(a);

	}

	int m;
	cin>>m;

	int c,d;

	for (int i = 0; i < m; ++i)
	{
		cin>>c>>d;
		v2.push_back(c);
		v4.push_back(d);
	}

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());
	sort(v4.begin(),v4.end());


	int t1,t2,t3,t4;

	t1=v1[0];
	t2 = v2[m-1];
	t3 = v3[n-1];
	t4 = v4[0];
	int result;

	(t2-t1)>(t3-t4)?result = t2-t1:result =t3-t4;

	if(result<=0)
		printf("0\n");
	else 
		printf("%d\n",result);

	return 0;
}