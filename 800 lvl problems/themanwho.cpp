//problem link:https://codeforces.com/problemset?tags=800-800
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

    	int n,k;
    	cin>>n>>k;
    	vector<int> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	vector<int> diff(n-1);

    	for(int i=0;i<n-1;i++){
    		diff[i]=abs(v1[i]-v1[i+1]);
    	}

    	// for(auto x:diff){
    	// 	cout<<x<<" ";
    	// }

    	// cout<<endl;

    	sort(diff.begin(),diff.end(),greater<int>());

    	// for(auto x:diff){
    	// 	cout<<x<<" ";
    	// }
        // cout<<endl;

    	ll sum=0;
    	int start=k-1;

    	for(int i=start;i<diff.size();i++){
    		sum+=diff[i];
    	}

    	cout<<sum<<endl;



    	t--;
    }

    return 0;
}