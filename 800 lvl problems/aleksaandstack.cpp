// Problem Link: https://codeforces.com/problemset/problem/1878/B
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
#include<numeric>
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
    	cin>>n;// min value will be 3

    	vector<ll> v1={1,3,5};
    	ll l=7;
    	int far=n-3;

    	for(int i=0;i<far;i++){

    		v1.push_back(l);
    		l+=2;
    	}

    	for (std::vector<ll>::iterator i = v1.begin(); i != v1.end(); ++i){

    		cout<<*i<<" ";
    	}
    	
    	cout<<endl;
    	
    	t--;
    }
    	
    


    return 0;
}