//code chef feb long contest eugene big number "KBIGNUMB"
//author:sumit yadav 05-02-2016 1:16am

#include <bits/stdc++.h>

using namespace std;

int main()
{
	

	long long int t;
	long long int a,n,m;
	//std::string temp;
	//std::string str = std::to_string(i);
	long long int x;
	long long int i;
	cin>>t;
	for (i = 0; i < t; ++i)
	{
		vector<long long int> v;

		int no_of_digits;
		int k;

		scanf("%lld %lld %lld",&a,&n,&m);
		x = a;
		//v.push_back(x);

   no_of_digits = x < 10 ? 1 :   
        (x < 100 ? 2 :   
        (x < 1000 ? 3 :   
        (x < 10000 ? 4 :   
        (x < 100000 ? 5 :   
        (x < 1000000 ? 6 :   
        (x < 10000000 ? 7 :  
        (x < 100000000 ? 8 :  
        (x < 1000000000 ? 9 :  
        10))))))));  
		int flag=0;
		int j=0;
		//v[j]=x%m;
		v.push_back(x%m);
		j++;
		//std::string temp = std::to_string(x);
		//cout<<temp<<endl;

/*stringstream ss;
ss << x;
temp  = ss.str();
cout<<temp<<endl;*/
		long long int count=0;

		if(m%2==0)
		{
			while(flag!=1)
			{
				//temp+=string(x);
				 //temp += to_string(x);
				//std::string temp = std::to_string(x);
				/*stringstream ss;
				ss << x;

				temp += ss.str();
				*/
				for(k=0;k<no_of_digits;++k)
				{
					x*=10;
				}
				x+=a;
				//x = long long int(temp);
				/*if (temp[0] == '$') {
        x = lexical_cast<long long>(&*temp.begin() + 1, temp.size() -1);
}*/
				if(x%m == v[j-1])
					flag=1;
				else
					//v[j++] = x%m;
					v.push_back(x%m);
				j++;

			}
			


			if(n%m>j)
			{
				/*vector<long long int>::iterator it;
				it = v.end()-1;
				cout<<*it<<endl;*/
				j--;
				cout<<v[j]<<endl;
			//	cout<<v.end();
			}
			else
				cout<<v[n%m]<<endl;
		}

		else if(m%2==1)
		{
			while(flag!=1)
			{
				//temp+=string(x);
				//temp += to_string(x);
				//std::string temp = std::to_string(x);
				/*stringstream ss;
				ss << x;
				temp  += ss.str();*/

				/*if (temp[0] == '$') {
        x = lexical_cast<long long>(&*temp.begin() + 1, temp.size() -1);
				//x = long long int(temp);*/
				for(k=0;k<no_of_digits;++k)
				{
					x*=10;
				}
				x+=a;
				if(x%m ==0)
					{   v.push_back(0);
						count++;
						flag = 1;
					}
				else
					//v[j++] = x%m;
					v.push_back(x%m);
					count++;
			}

			cout<<v[n%count]<<endl;
		}

		v.erase(v.begin(),v.end());
	}

	return 0;

}

