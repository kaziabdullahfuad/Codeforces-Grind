//problem link:https://codeforces.com/problemset/problem/1866/A
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

    

    	int n;
    	cin>>n;

    	vector<int> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	int min_val=INT_MAX;
    	
    	for(int i=0;i<n;i++){
    		int diff=abs(v1[i]-0);

    		if(diff<min_val){
    			min_val=diff;
    		}
    	}

    	cout<<min_val<<endl;

    	

    return 0;
}