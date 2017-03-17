#include <bits/stdc++.h>

using namespace std;

int main()
{

int n,k;
cin>>n>>k;

int i,j;
vector<int> v;

vector<int>::iterator it1;
vector<int>::iterator it2;

int ele;
for (i = 0; i < n; ++i)
{
	cin>>ele;
	v.push_back(ele);

}
/*for (int i = 0; i < n; ++i)
{
	cout<<v[i]<<endl;
}*/

//string str;
for (i = 0; i < k; ++i)
{
	
	//cout<<"input:"<<str[0];
	int t;
	int first , second;
	cin>>t;
	int pos_f=0;
	int pos_l=0;
	//int flag1=0;
	//int flag2=0;
	it1= v.begin();
	it2 = v.begin();
	if(t==1)
	{
		cin>>first>>second;

		while(*it1!=first && it1!=v.end())
		{

			pos_f++;
			it1++;


		}
		while(*it2!=second && it2!=v.end())
		{

			pos_l++;
			it2++;


		}

		v[pos_f]>v[pos_l]?v[pos_l]=0:v[pos_f]=0;
		
		//cout<<pos_f<<"  "<<pos_l;

	}

	else if(t==2)
	{
		cout<<accumulate(v.begin(), v.end(), 0)<<endl;
	}



}

	return 0;
}