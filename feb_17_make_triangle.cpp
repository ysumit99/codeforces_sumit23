//code chef feb long contest make triangle  "MAKETRI"
//author:sumit yadav 08-02-2016 17:33
#include <bits/stdc++.h>
using namespace std;


int main()
{
 
 long long int n,r,l;

 long long int i,t,lower_limit,upper_limit;
 scanf("%lld %lld %lld",&n,&l,&r);
 long long int last,second_last,final_answer;



 vector<long long int> v;
 vector<long long int>::iterator it;
 for (int i = 0; i < n; ++i)
 {
 	scanf("%lld",&t);
 	v.push_back(t);
 }
 sort(v.begin(),v.end());
 it = v.end();
 --it;
 last = *it;
 //cout<<last<<endl;
 --it;
 second_last = *it;
 //cout<<second_last<<endl;

 upper_limit = last + second_last;
 upper_limit--;
 //lower_limit = last - second_last;
 lower_limit=2;
 
 if(l<lower_limit)
 {
 	if(r<lower_limit)
 		final_answer = 0;
 	else if(r>=lower_limit && r<=upper_limit)
 		final_answer = r - lower_limit +1;
 	else if(r>upper_limit)
 		final_answer = upper_limit - lower_limit +1;
 }
else if(l==lower_limit)
{
	if(r>upper_limit)
		final_answer = upper_limit - lower_limit + 1;
	else if(r<=upper_limit)
		final_answer = r - lower_limit + 1;

}
else if(l > lower_limit && l<=upper_limit)
{
	if(r<=upper_limit)
		final_answer = r-l+1;
	else if(r>upper_limit)
		final_answer = upper_limit - l+1;

}
else if(l>upper_limit)
	final_answer = 0;

printf("%lld",final_answer);




	return 0;
}