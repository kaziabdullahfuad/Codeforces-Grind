//problem link:https://codeforces.com/problemset/problem/1895/A
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

    	int x,y,k;
    	cin>>x>>y>>k;

    	if(x>=y){
    		cout<<x<<endl;
    	}
    	else{

    		int dist=x+k;

    		if(dist>=y){
    			cout<<y<<endl;
    		}
    		else{

    			//cout<<dist<<endl;
    			dist+=(y-dist)*2;

    			cout<<dist<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}