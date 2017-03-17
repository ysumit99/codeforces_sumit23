#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s="min(int, int)";
	//string temp="min(int, int)";
	string x;

	/*int i=0,count=0;
	while(s[i]!='\0')
	{
		count++;
		i++;
	}*/

//printf("%d\n",count);
	//int t=9;
	if(n==2)
		printf("min(int, int)\n");
	else{
	for (int i = 2; i < n; ++i)
	{
		//s.insert(t,temp);
		//t+=12;
		x = "min(int, "+s+")";
		s=x;

	}

	cout<<s<<endl;


}

	return 0;
}