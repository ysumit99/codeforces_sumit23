#include <bits/stdc++.h>
using namespace std;
 
// Utility function to find minimum of three numbers
int min(int x, int y, int z)
{
    return min(min(x, y), z);
}
 
int editDistDP(string str1, string str2, int m, int n)
{
    // Create a table to store results of subproblems
    int dp[m+1][n+1];
 
    // Fill d[][] in bottom up manner
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            // If first string is empty, only option is to
            // isnert all characters of second string
            if (i==0)
                dp[i][j] = j;  // Min. operations = j
 
            // If second string is empty, only option is to
            // remove all characters of second string
            else if (j==0)
                dp[i][j] = i; // Min. operations = i
 
            // If last characters are same, ignore last char
            // and recur for remaining string
            else if (str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1];
 
            // If last character are different, consider all
            // possibilities and find minimum
            else
                dp[i][j] = 1 + min(dp[i][j-1],  // Insert
                                   dp[i-1][j],  // Remove
                                   dp[i-1][j-1]); // Replace
        }
    }
 
    return dp[m][n];
}
int main()
{
    // your code goes here
    int t;
    cin>>t;

    string str1;
    string str2;
    int k;
    for (int i = 0; i < t; ++i)
    {
        cin>>str1>>str2>>k;
    
    int result;
    //cout<<"hi";
     result = editDistDP( str1 , str2 , str1.length(), str2.length());
     //cout<<result;
     if(result<=k)
        printf("TO ERR IS HUMAN\n");
    else
        printf("TO ERR TOO MUCH IS DEVIL\n");
    }
 
    return 0;
}