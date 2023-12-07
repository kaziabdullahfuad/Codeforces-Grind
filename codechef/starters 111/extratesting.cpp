#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  string s="Hello World";
  cout<<s<<endl; // Hello World
  cout<<s.size()<<endl;

  s="Hello World";

  s.erase(2);

  cout<<s<<endl; // only He remains

  s="Hello World";

  s.erase(2,1);

  cout<<s<<endl;

  s="Hello World";

  s.erase(2,4);

  cout<<s<<endl;


    return 0;
}