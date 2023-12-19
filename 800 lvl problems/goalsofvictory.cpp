//problem link:https://codeforces.com/problemset/problem/1877/A
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

    	int sum=0;

    	for(int i=0;i<n-1;i++){
    		int val;
    		cin>>val;
    		//cout<<val<<" ";
    		sum+=val;
    	}
    	//cout<<endl;

    	cout<<sum*-1<<endl;

    	t--;
    }

    return 0;
}