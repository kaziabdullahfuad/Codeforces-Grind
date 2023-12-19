//problem link:https://codeforces.com/problemset/problem/1872/A
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

    	int max_num=max(a,b);
    	int min_num=min(a,b);
    	int count=0;
    	while(min_num<max_num){

    		max_num-=c;
    		min_num+=c;
    		//cout<<max_num<<" "<<min_num<<endl;
    		count++;
    	}
    	cout<<count<<endl;


    	t--;
    }

    return 0;
}