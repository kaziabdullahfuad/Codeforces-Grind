// Problem Link: https://codeforces.com/contest/1609/problem/A
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
    	vector<ll> v1(n);
    	for(int i=0;i<n;i++){

    		cin>>v1[i];

    	}
    	ll temp=1;
    	for(int i=0;i<v1.size();i++){

    		if(v1[i]%2==0){

    			while(v1[i]%2==0){

    				v1[i]/=2;
    				temp*=2;
    			}
    		}
    	}

    	sort(v1.begin(),v1.end());

    	v1[v1.size()-1]*=temp;
    	ll sum=0;
    	for(int i=0;i<v1.size();i++){
    		sum+=v1[i];
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}