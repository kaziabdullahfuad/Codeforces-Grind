//problem link:https://codeforces.com/problemset/problem/1894/A
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;
    	string s;
    	cin>>s;

    	if(s[s.size()-1]=='A'){
    		cout<<'A'<<endl;
    	}
    	else{
    		cout<<'B'<<endl;
    	}

    	t--;
    }

    return 0;
}