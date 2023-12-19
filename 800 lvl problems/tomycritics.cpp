//problem link:https://codeforces.com/problemset/problem/1850/A
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

    	int a,b,c;
    	cin>>a>>b>>c;

    	if(a+b>=10){
    		cout<<"YES"<<endl;
    	}
    	else if(a+c>=10){
    		cout<<"YES"<<endl;
    	}
    	else if(b+c>=10){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}