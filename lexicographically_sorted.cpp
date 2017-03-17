#include<bits/stdc++.h>
using namespace std;
int a[100010];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        string str;
        cin>>str;
 
        for(int i=0;i<l;i++)
        {
            a[i]=(int)str[i];
        }
        sort(a,a+l);
        for(int i=0;i<l;i++)
        {
            str[i]=a[i];
        }
        cout<<str;
        cout<<"\n";
    }
 
}
 