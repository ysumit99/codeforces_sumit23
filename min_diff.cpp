//hackerrank rookierank2 minimum absolute difference
//author:sumit yadav 11-02-2016 22:00 am
#include <bits/stdc++.h>

using namespace std;

int main()
{

int n;
int i,j,ans,ele;
vector<int> v;
vector<int>::iterator it1;
vector<int>::iterator it2;

scanf("%d",&n);

for (i = 0; i < n; ++i)
{
	scanf("%d",&ele);
	v.push_back(ele);
}
int big,small;
int temp=1000000000;

for(it1 = v.begin();it1!=v.end();it1++)
{
	for (it2 = it1 + 1;it2!=v.end();it2++)
	{
		*it1>=*it2 ? big=*it1 :big = *it2;
		if(big == *it1)
			small = *it2;
		else
			small = *it1;

		if(big-small < temp )
			temp = big-small;
	}
}

printf("%d",temp);




	return 0;
}