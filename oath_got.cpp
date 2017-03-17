#include <bits/stdc++.h>

using namespace std;

int main()
{

int n;
int i;
int t;
vector<int> v;
vector<int>::iterator it1;

vector<int>::iterator it2;
scanf("%d",&n);
for (int i = 0; i < n; ++i)
{
	scanf("%d",&t);
	v.push_back(t);

}

sort(v.begin(), v.end());
int count=0;
//int temp;
//int flag=0;
it1 = v.begin();
it2 = v.end()-1;

for(i=0;i<n;i++)
{



if(v[i]>*it1 && v[i]<*it2)
	count++;
}

if(n<3)
	printf("0");
else 
{
	printf("%d",count);
}





	return 0;
}