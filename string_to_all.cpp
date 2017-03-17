#include <iostream>   // std::cout
#include <string>   
#include <bits/stdc++.h>
  // std::string, std::stoll

using namespace std;
int main ()
{
  string str = "12121212";

  string::size_type sz = 0;   // alias of size_t

  while (!str.empty()) {
    long long ll = stoll (str,&sz);
    //cout << str.substr(0,sz) << " interpreted as " << ll << '\n';
    str = str.substr(sz);
  }
  cout<<str<<endl;

  return 0;
}



   